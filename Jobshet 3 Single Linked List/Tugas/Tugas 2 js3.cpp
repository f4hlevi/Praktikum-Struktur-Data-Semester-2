//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num);

int main() {
    int n, m;
    int *primes;
    
    printf("Masukkan nilai n untuk menampilkan bilangan prima pertama hingga ke-n: ");
    scanf("%d", &n);

    printf("Masukkan ukuran awal alokasi memori: ");
    scanf("%d", &m);

    primes = (int *)malloc(m * sizeof(int));
    if (primes == NULL) {
        printf("Pengalokasian memori awal gagal.\n");
        return 1;
    }

    int count = 0; // Jumlah bilangan prima yang sudah ditemukan
    int currentNum = 2; // Nomor saat ini yang sedang dicek apakah bilangan prima

    while (count < n) {
        if (isPrime(currentNum)) {
            primes[count] = currentNum;
            count++;
            primes = (int *)realloc(primes, (m + count) * sizeof(int));
            if (primes == NULL) {
                printf("Pengalokasian memori tambahan gagal.\n");
                return 1;
            }
        }
        currentNum++;
    }

    printf("Bilangan prima pertama sampai ke-%d adalah:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    free(primes);
    return 0;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

