//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>

int main(){
	int n;
	printf("Masukkan banyaknya bilangan: ");
	scanf("%d", &n);
	
	int angka[n]; // Deklarasi array 'angka' dengan ukuran n
	
	for(int i = 0; i < n; i++){
		printf("Masukkan angka ke %d : ", i+1);
		scanf("%d", &angka[i]);
	}
	
	for (int i = 0; i < n; i++){
		printf("Angka ke %d : %d\n", i+1, angka[i]);
	}
	getchar();
	return 0;
}
