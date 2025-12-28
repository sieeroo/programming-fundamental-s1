#include <stdio.h>

int main() {
    char namausr[10];
    int tebakan;
    int pilihan = 1;
    int udhtebak = 0;
    int test1 = 8;
    int test2 = 34;
    int test3 = 42;

    printf("Masukkan nama kamu :  \n");
    scanf("%s", namausr);

    printf("======= Halo %s, SELAMAT DATANG DI SUPER DEAL =======\n", namausr);

    printf("Game = Tebak Angka dari 1-100\n");
    printf("Aturan :\n");
    printf("1. Pemain disuruh untk tebak 1 angka\n");
    printf("2. Pemain dikasih 3x kesempatan untuk menebak\n");
    printf("3. Game akan selesai jika pemain berhasil menebak salah satu angka\n");
    printf("== Selamat Bermain ==\n");
    printf("Good Luck !!, %s\n\n", namausr);

    while (pilihan <= 3 && !udhtebak) {
        printf("Masukkan Angka Tebakan :: \n");
        scanf("%d", &tebakan);

        switch (tebakan) {
            case 8:
                printf("GOKILL!! Kamu dapet Tesla Model X  \n");
                printf("===== Thengs udah main, %s =====\n", namausr);
                udhtebak = 1;
                break;
                
            case 34:
                printf("WIH KEREN! Kamu dapet Tesla Model Y \n");
                printf("===== Thengs udah main, %s =====\n", namausr);
                udhtebak = 1;
                break;
                
            case 42:
                printf("ANJAYY, Kamu dapet Tesla Model S\n");
                printf("===== Thengs udah main, %s =====\n", namausr);
                udhtebak = 1;
                break;

            default:
                printf("MASIH SALAH BANH ^_^ \n");
                break;
        }

        if (pilihan == 3 && !udhtebak) {
            printf("WADUH, Belum beruntung yhh:( \n");
            printf("|| ANGKA YANG BENAR :: 8, 34, 42\n");
            printf("===== Thengs udah main, %s =====\n", namausr);
        }

        pilihan++;
    }

    return 0;
}