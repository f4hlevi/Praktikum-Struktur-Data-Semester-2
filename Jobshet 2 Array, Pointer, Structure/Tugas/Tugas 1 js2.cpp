//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>

struct Mahasiswa {
    int NIM;
    char Nama[50];
    char TanggalLahir[20];
    float IPK;
};

int main() {
    struct Mahasiswa mhs1;

    printf("Masukkan NIM: ");
    scanf("%d", &mhs1.NIM);
    
    printf("Masukkan Nama: ");
    scanf("%s", mhs1.Nama);

    printf("Masukkan Tanggal Lahir (dd/mm/yyyy): ");
    scanf("%s", mhs1.TanggalLahir);

    printf("Masukkan IPK: ");
    scanf("%f", &mhs1.IPK);

    printf("\nData Mahasiswa:\n");
    printf("NIM: %d\n", mhs1.NIM);
    printf("Nama: %s\n", mhs1.Nama);
    printf("Tanggal Lahir: %s\n", mhs1.TanggalLahir);
    printf("IPK: %.2f\n", mhs1.IPK);

    return 0;
}

