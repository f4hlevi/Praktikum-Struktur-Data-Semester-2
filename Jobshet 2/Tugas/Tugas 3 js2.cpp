//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>

struct Mahasiswa {
    char nama[50];
    int umur;
    char jurusan[50];
};

void tampilkanDataMahasiswa(struct Mahasiswa mhs) {
    printf("\nData Mahasiswa:\n");
    printf("Nama: %s\n", mhs.nama);
    printf("Umur: %d\n", mhs.umur);
    printf("Jurusan: %s\n", mhs.jurusan);
}

int main() {
    struct Mahasiswa mhs; 

    printf("Masukkan Nama: ");
    scanf("%s", mhs.nama);

    printf("Masukkan Umur: ");
    scanf("%d", &mhs.umur);

    printf("Masukkan Jurusan: ");
    scanf("%s", mhs.jurusan);

    tampilkanDataMahasiswa(mhs);

    return 0;
}

