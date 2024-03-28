//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>
#include <conio.h>

typedef int angka;
typedef char huruf;

int main(){
	int umur;
	char h;
	char nama[10];
	
	printf("Masukkan umur anda: ");
	scanf ("%d", &umur);
	printf("\nUmur anda adalah %d", umur);
	
	printf("\nMasukkan huruf : ");
	fflush(stdin);
    h = getchar(); 
	printf ("\nHuruf anda %c", h);
	
	printf("\nMasukkan nama: ");
	scanf("%s", &nama);
	printf("Nama anda %s", nama);
	
	getch();
	return 0;
}
