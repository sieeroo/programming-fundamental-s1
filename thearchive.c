#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct bukuNovel {
    char *judulBuku;
    int stokBuku;
    int hargaBuku;
};

int main() {
    char *judulBuku[] = {"Hujan", "Selamat Tinggal", "Bumi", "Melangkah", "Matahari"};
    int stokBuku[] = {5, 20, 3, 15, 9};
    int hargaBuku[] = {9900, 8500, 10100, 10300, 10100};

    int jumlahBuku = 0;
    struct bukuNovel *koleksiBuku = (struct bukuNovel*) malloc(0 * sizeof(struct bukuNovel));
    
    printf("       |`====~~! STOK BARANG !~~====`|\n");
    
    for(int i = 0; i < 5; i++) {
        jumlahBuku++;
        koleksiBuku = (struct bukuNovel*)realloc(koleksiBuku, jumlahBuku * sizeof(struct bukuNovel));
        
        koleksiBuku[i].judulBuku = (char*) malloc((strlen(judulBuku[i]) + 1));
        strcpy(koleksiBuku[i].judulBuku, judulBuku[i]);
        
        koleksiBuku[i].hargaBuku = hargaBuku[i];
        koleksiBuku[i].stokBuku = stokBuku[i];
    }

    printf("No.  Judul Buku\t\tHarga\t\tStok\n");
    printf("-------------------------------------------->\n");
    for(int i = 0; i < jumlahBuku; i++) {
        printf("%d.   %-15s\tRp%d\t\t%d\n", i+1, koleksiBuku[i].judulBuku, koleksiBuku[i].hargaBuku, koleksiBuku[i].stokBuku);
    }
    
    printf("\nMengubah jumlah stok dari judul buku Hujan\n");
    koleksiBuku[0].stokBuku = 1;
    
    printf("Menambahkan 2 judul buku\n\n");
    printf("       |`====~~! STOK BARANG !~~====`|\n");

    jumlahBuku++;
    koleksiBuku = (struct bukuNovel*) realloc(koleksiBuku, jumlahBuku * sizeof(struct bukuNovel));
    koleksiBuku[5].judulBuku = (char *) malloc(13 * sizeof(char)); 
    strcpy(koleksiBuku[5].judulBuku, "Tentang Kamu");
    koleksiBuku[5].hargaBuku = 9900;
    koleksiBuku[5].stokBuku = 7;
    
    jumlahBuku++;
    koleksiBuku = (struct bukuNovel*) realloc(koleksiBuku, jumlahBuku * sizeof(struct bukuNovel));
    koleksiBuku[6].judulBuku = (char *) malloc(6 * sizeof(char));
    strcpy(koleksiBuku[6].judulBuku, "Bulan");
    koleksiBuku[6].hargaBuku = 10100;
    koleksiBuku[6].stokBuku = 9;

    printf("No.  Judul Buku\t\tHarga\t\tStok\n");
    printf("-------------------------------------------->\n");
    for(int i = 0; i < jumlahBuku; i++) { 
        printf("%d.   %-15s\tRp%d\t\t%d\n", i+1, koleksiBuku[i].judulBuku, koleksiBuku[i].hargaBuku, koleksiBuku[i].stokBuku);
    }
    
    for(int i = 0; i < jumlahBuku; i++) {
        free(koleksiBuku[i].judulBuku);
    }

    free(koleksiBuku);
    return 0;
}