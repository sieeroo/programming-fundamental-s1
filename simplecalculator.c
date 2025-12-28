#include <stdio.h>
#include <math.h>

#define PI 3.14

int pilihan;
int kurang = 1;
int kali = 0;
int bagi = 0;
int jmlang;
float input;
int tambah = 0;

int pangkat(int basis, int ekspo) {
    if(ekspo == 0) {
        return 1;
    }
    else {
        return basis*pangkat(basis, ekspo -1);
    }
}

unsigned long long faktorial(int a) {
    if (a == 0 || a == 1) {
        return 1;
    } 
    if (a < 0) {
        return 0; 
    }
    return a * faktorial(a-1); 
}

int main() {
    do {
        printf("========  ~~~~~~~~~~~~~~~~~~  ========\n");
        printf("~~       Kalkulator SEDERHANA       ~~\n");
        printf("========  ~~~~~~~~~~~~~~~~~~  ========\n");
        printf("Fitur Kalkulator ::\n");
        printf("1. Penjumlahan  \n");
        printf("2. Pengurangan \n");    
        printf("3. Perkalian  \n");
        printf("4. Pembagian\n");
        printf("5. Pangkat \n");
        printf("6. Faktorial \n");
        printf("7. Akar Kuadrat \n");
        printf("8. Trigonometri \n");
        printf("9. Pembulatan Nilai \n");
        printf("10. Exit \n\n");
        
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1:
                printf("== Penjumlahan ==\n");
                printf("Masukkan Jumlah Angka : ");
                scanf("%d", &jmlang); 
                
                if (jmlang <= 1) {
                    printf("ERROR : Minimal jumlah angka = 2!\n");
                    break;
                }

                tambah = 0; 
                printf("Masukkan %d Angka :: ", jmlang);
                for (int i = 0; i < jmlang; i++){
                    scanf("%f", &input);
                    tambah += input;
                }
                printf("%d\n", tambah);
                break;

            case 2:
                {
                    float kurang;
                    float input;

                    printf("== Pengurangan ==\n");
                    printf("Masukkan Jumlah Angka : ");
                    scanf("%d", &jmlang);
                    
                    if (jmlang <= 1) {
                        printf("ERROR : Minimal jumlah angka = 2!\n");
                        break;
                    }
                    printf("Masukkan %d Angka :: ", jmlang);
                    scanf("%f", &kurang);
                    for (int i = 1; i < jmlang; i++){
                        scanf("%f", &input);
                        kurang -= input;
                    }
                    printf("Hasil = %.1f\n", kurang);
                }
                break;

            case 3:
                {
                    int kali = 1;
                    int masukan;
                    
                    printf("== Perkalian ==\n");
                    printf("Masukkan Jumlah Angka : ");
                    scanf("%d", &jmlang);

                    if (jmlang <= 1) {
                        printf("ERROR : Minimal jumlah angka = 2!\n");
                        break;
                    }

                    printf("Masukkan %d Angka :: ", jmlang);
                    for (int i = 0; i < jmlang; i++){
                        scanf("%d", &masukan);
                        kali *= masukan;
                    }
                    printf("Hasil = %d\n", kali);
                }
                break;

            case 4:
                {
                    float bagi;
                    printf("== Pembagian ==\n");
                    printf("Masukkan Jumlah Angka : ");
                    scanf("%d", &jmlang);

                    if (jmlang <= 1) {
                        printf("ERROR : Minimal jumlah angka = 2!\n");
                        break;
                    }
                    
                    printf("Masukkan %d Angka :: ", jmlang);
                    scanf("%f", &bagi);

                    for (int i = 1; i < jmlang; i++) {
                        scanf("%f", &input);
                        if (input == 0) {
                            printf("ERROR : Pembagi tidak boleh = 0\n");
                            break;
                        }
                        else {
                            bagi /= input;
                        }
                    }
                    printf("Hasil = %f \n", bagi);
                }
                break;

            case 5:
                {
                    int basis, ekspo;
                    printf("== Pangkat ==\n");
                    printf("Masukkan Angka Basis : ");
                    scanf("%d", &basis);
                    printf("Masukkan Angka Pangkat : ");
                    scanf("%d", &ekspo);

                    int hasil = pangkat(basis, ekspo);
                    printf("%d^%d = %d\n", basis, ekspo, hasil);
                }
                break;
            
            case 6:
                {
                    int angfakto;
                    printf("== Faktorial ==\n");
                    printf("Masukkan Angka : ");
                    scanf("%d", &angfakto);

                    if (angfakto < 0) {
                        printf("ERROR : Faktorial Tidak Terdefinisi Untuk Bilangan Negatif\n");
                    }
                    else {
                        unsigned long long hasil = faktorial(angfakto);
                        printf("%d! = %llu\n", angfakto, hasil);
                    }
                }
                break;

            case 7:
                {
                    float akarkuadr;
                    printf("== Akar Kuadrat ==\n");
                    printf("Masukkan Angka :: ");
                    scanf("%f", &input);
                    akarkuadr = sqrt(input);
                    printf("Akar kuadrat dari %.1f adalah %.1f\n", input, akarkuadr);
                }
                break;

            case 8:
                {
                    int menutri;
                    float isin, icos, itan, rad;

                    printf("== Trigonometri ==\n");
                    printf("Pilih Menu Operasi \n");
                    printf("1. Sin \n2. Cos \n3. Tan \nPilihan Kamu : ");
                    scanf("%d", &menutri);
                    switch (menutri) {
                        case 1:
                            printf("Masukkan Angka(satuan derajat) : ");
                            scanf("%f", &input);
                            rad = input * PI / 180.0;
                            isin = sin(rad);
                            printf("Sin %.1f derajat adalah %.1f\n", input, isin);
                            break;
                        case 2:
                            printf("Masukkan Angka(satuan derajat) : ");
                            scanf("%f", &input);
                            rad = input * PI / 180.0;
                            icos = cos(rad);
                            printf("Cos %.1f derajat adalah %.1f\n", input, icos);
                            break;
                        case 3:
                            printf("Masukkan Angka(satuan derajat) : ");
                            scanf("%f", &input);
                            rad = input * PI / 180.0;
                            itan = tan(rad);
                            printf("Tan %.1f derajat adalah %.1f\n", input, itan);
                            break;
                        default:
                            printf("Waduh, gak ada di pilihan nih\n");
                            break;
                    }
                }
                break;

            case 9:
                {
                    int bulat;
                    float angka;
                    int pilihan2;

                    printf("== Pembulatan Nilai ==\n");
                    printf("Pilih Opsi Pembulatan :: \n1. Ceil \n2. Floor \nPilihan : ");
                    scanf("%d", &pilihan2);
                    
                    switch (pilihan2) {
                        case 1:
                            printf("Masukkan Angka : ");
                            scanf("%f", &angka);
                            bulat = ceil(angka);
                            printf("Sebelum Pembulatan : %.2f\nSetelah Pembulatan : %d\n", angka, bulat);
                            break;
                        case 2:
                            printf("Masukkan Angka : ");
                            scanf("%f", &angka);
                            bulat = floor(angka);
                            printf("Sebelum Pembulatan : %.2f\nSetelah Pembulatan : %d\n", angka, bulat);
                            break;
                        default:
                            printf("Waduh, gak ada di pilihan \n");
                            break;
                    }
                }
                break;

            case 10:
                printf("== Exit ==\n || Terima Kasih Sudah Menggunakan Kalkulator || \n"); 
                break;

            default:
                printf("Sorry bre, gak ada pilihannya \n");
                break;
        }
    } while (pilihan != 10);

    return 0;
}