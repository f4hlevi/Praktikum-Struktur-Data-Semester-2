//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>

struct Mahasiswa {
    char nama[50];
    int umur;
    char jurusan[50];
};

void inputDataMahasiswa(struct Mahasiswa *mahasiswa) {
    printf("Masukkan Nama: ");
    scanf("%s", mahasiswa->nama);

    printf("Masukkan Umur: ");
    scanf("%d", &mahasiswa->umur);

    printf("Masukkan Jurusan: ");
    scanf("%s", mahasiswa->jurusan);
}

int main() {
    struct Mahasiswa mhs; 

    inputDataMahasiswa(&mhs);

    printf("\nData Mahasiswa:\n");
    printf("Nama: %s\n", mhs.nama);
    printf("Umur: %d\n", mhs.umur);
    printf("Jurusan: %s\n", mhs.jurusan);

    return 0;
}

