#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int hitungArgumen, char *nilaiArgumen[]) {
    FILE *f;
    char namaFile[50];
    char inputUser[500];
    
    if(hitungArgumen > 1) {
        strcpy(namaFile, nilaiArgumen[1]);
        printf("Nama File : %s\n", namaFile);
    }
    else {
        printf("Masukkan nama file dengan format .txt : ");
        scanf("%s", namaFile);
        getchar();
    }

    if (strstr(namaFile, ".txt") == NULL) {
        printf("Error, File gak ada format .txt\n");
        return 1;
    }

    f = fopen(namaFile, "r");
    if (f != NULL) {
        printf("               ~~~~~ ISI FILE ~~~~~\n");
        char buffer[1000];
        while (fgets(buffer, sizeof(buffer), f) != NULL) {
            printf("%s", buffer);
        }
        fclose(f);
        printf("\n~~~~~~~~~~~~~~~~~~ ========== ~~~~~~~~~~~~~~~~~~~~\n\n");
    }
    else {
        printf("File tidak ada! Silahkan buat file baru!\n\n");
    }

    f = fopen(namaFile, "a");
    if (f == NULL) {
        printf("Error, File tidak dapat dibuka\n");
        return 1;
    }

    printf("          ~~ Silahkan Masukkan Teks! ~~\n");
    printf("    Ketik <SELESAI> jika ingin simpan file!\n");

    while (1) {
        fgets(inputUser, sizeof(inputUser), stdin);
        inputUser[strcspn(inputUser, "\n")] = 0;

        if (strcmp(inputUser, "<SELESAI>") == 0) {
            break;
        }

        fprintf(f, "%s\n", inputUser);
    }

    fclose(f);

    printf("File berhasil disimpan. File ditutup!!\n");

    return 0;
}