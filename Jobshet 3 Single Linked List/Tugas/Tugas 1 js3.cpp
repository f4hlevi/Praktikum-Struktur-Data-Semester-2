//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>
#include <stdlib.h>

void generateFibonacci(int n);

int main() {
    int n;
    
    printf("Masukkan nilai n untuk menampilkan bilangan Fibonacci pertama hingga ke-n: ");
    scanf("%d", &n);
    
    generateFibonacci(n);
    
    return 0;
}

void generateFibonacci(int n) {
    if (n <= 0) {
        printf("Nilai n harus lebih besar dari 0.\n");
        return;
    }
    
    int *fibonacci = (int *)malloc(n * sizeof(int));
    
    if (fibonacci == NULL) {
        printf("Pengalokasian memori gagal.\n");
        return;
    }
    
    fibonacci[0] = 0;
    if (n > 1) {
        fibonacci[1] = 1;
        for (int i = 2; i < n; ++i) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
    }
    
    printf("Bilangan Fibonacci pertama sampai ke-%d adalah:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");
    
    free(fibonacci);
}

