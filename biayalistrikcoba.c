// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     char nama [2] [10] = {"Pribadi", "Perusahaan"};
//     int tarif[2] = {1400, 1700};
//     int diskon[2] = {0.05, 0.1};
//     int kode[2] = {123, 456};
//     int pilih;
//     float penggunaan;
//     printf("\n===== Program Menghitung Biaya Listrik =====");
//     printf("\nMasukkan Pemakaian bulan ini (kwh) : ");
//     scanf("%f", &penggunaan);
//     printf("\n(0) Pribadi");
//     printf("\n(1) Perusahaan");
//     printf("\nMasukkan pilihan anda : ");
//     scanf("%d", &pilih);
    
//     float totalharga = tarif[pilih] * penggunaan;

//     printf("\nPemakaian bulan ini : %1.f", penggunaan);
//     printf("\nNama Pelanggan : %s ", nama[pilih]);
//     printf("\nKode Jenis Pelanggan : %d ", kode[pilih]);
//     printf("\nTotal Harga = %0.f", totalharga);

//     if (totalharga>100000){
//         totalharga = tarif[pilih] * penggunaan * diskon[pilih];
//         printf("\nTotal Harga : %0.f", totalharga);
//     }
        
// }
    
#include <stdio.h>
#include <stdlib.h>

int tarifpribadi(float penggunaan){
    float tarifperkwh = (1400 * penggunaan);
    return tarifperkwh;
}

int tarifperusahaan(float penggunaan){
    float tarifperkwh = (1700 * penggunaan);
    return tarifperkwh;
}

int tarifperusahaandiskon(float penggunaan){
    float tarifperkwh = (1700 * penggunaan);
    return tarifperkwh * 0.1;
}

int tarifpribadidiskon(float penggunaan){
    float tarifperkwh = (1400 * penggunaan);
    return tarifperkwh * 0.05;
}


int main(){
    char nama [2] [10] = {"Pribadi", "Perusahaan"};
    int kode[2] = {123, 456};
    int pilih;
    float penggunaan;
    printf("\n===== Program Menghitung Biaya Listrik =====");
    printf("\nMasukkan Pemakaian bulan ini (kwh) : ");
    scanf("%f", &penggunaan);
    printf("\n(0) Pribadi");
    printf("\n(1) Perusahaan");
    printf("\nMasukkan pilihan anda : ");
    scanf("%d", &pilih);
    
    float totalharga1 = tarifpribadi(penggunaan);
    float totalharga2 = tarifperusahaan(penggunaan);
    float totalharga3 = tarifperusahaandiskon(penggunaan);
    float totalharga4 = tarifpribadidiskon(penggunaan);
    
    if (pilih == 0 && totalharga4>100000){
        totalharga4;
        printf("\nPemakaian bulan ini : %1.f", penggunaan);
        printf("\nNama Pelanggan : %s ", nama[pilih]);
        printf("\nKode Jenis Pelanggan : %d ", kode[pilih]);
        printf("\nTotal Harga = %.0f", totalharga4);
    }else if(pilih == 0){
        totalharga1;
        printf("\nPemakaian bulan ini : %1.f", penggunaan);
        printf("\nNama Pelanggan : %s ", nama[pilih]);
        printf("\nKode Jenis Pelanggan : %d ", kode[pilih]);
        printf("\nTotal Harga = %.0f", totalharga1);
    }else if(pilih == 1 && totalharga3>100000){
        totalharga3;
        printf("\nPemakaian bulan ini : %1.f", penggunaan);
        printf("\nNama Pelanggan : %s ", nama[pilih]);
        printf("\nKode Jenis Pelanggan : %d ", kode[pilih]);
        printf("\nTotal Harga = %.0f", totalharga3);
    }else if(pilih == 1){
        totalharga2;
        printf("\nPemakaian bulan ini : %1.f", penggunaan);
        printf("\nNama Pelanggan : %s ", nama[pilih]);
        printf("\nKode Jenis Pelanggan : %d ", kode[pilih]);
        printf("\nTotal Harga = %.0f", totalharga2);
    }
    return 0;
    
}