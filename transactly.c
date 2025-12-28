#include <stdio.h>

char namacust[50];
char namabrg[20];
int jumlahbrg;
int hargaunit;
int hargadiskon;
int diskon;
int totalhrg;
int dptdiskon = 0;

int main (){
    printf("=====   Hai, Selamat Datang   =====\n");
    printf("Masukkan Nama Customer : ");
    scanf("%s", &namacust);

    printf("Masukkan Nama Barang   :: ");
    scanf("%s", namabrg);

    printf("Masukkan Jumlah Barang :: ");
    scanf("%d", &jumlahbrg);

    printf("Masukkan Harga         :: ");
    scanf("%d", &hargaunit);

    printf("\n");

    totalhrg = jumlahbrg * hargaunit;

    if (totalhrg > 100000){
        diskon = totalhrg * 0.1;
        hargadiskon = totalhrg - diskon;
        dptdiskon = 1;
    }

    printf("== Rincian Barang ==\n");
    printf("~~%s(Customer) Membeli Barang dengan Rincian sebagai Berikut, \n", namacust);
    printf("Nama barang          :: %s\n", namabrg);
    printf("Jumlah barang        :: x%d\n", jumlahbrg);
    printf("Harga satuan         :: Rp%d\n", hargaunit);
    printf("Total Harga Normal   :: Rp%d\n\n", totalhrg);

    if(dptdiskon){
        printf("=== Diskon Berlaku ===\n");
        printf("Berlaku Diskon (10%%) :: Rp%d\n", diskon);
        printf("Total Harga Setelah Diskon :: %d\n", hargadiskon);
    }
    else {
        printf(" | Barang Tidak Mendapatkan Diskon | \n");
    }

    return 0;
}