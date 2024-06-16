//created by Fajri Alhidra Fahlevi 23343062

#include <stdio.h>
#include <conio.h>

int main(){
	int usia1 = 50;
	int usia2 = 18;
	
	int *ptr;
	//menugaskan pointer tersebut kepada usia1
	ptr = &usia1;//& adalah operator alamat
	
	printf("\nUsia saya (usia1): %d", usia1);
	printf("\nUsia saya (*ptr): %d", *ptr);
	//&ptr merupakan nilai yang disimpan ptr, yaitu 50
	printf("\n (&usia1) %x", &usia1,ptr);
	//tugaskan kepada usia2
	ptr=&usia2;
	
	printf("\n Usia Anda (*ptr): %d", *ptr);
	//*ptr merupakan nilai yang disimpan ptr, yaitu 18
	printf("\n(&usia2) %x (ptr) %x", &usia2, ptr);
	//ptr adalah alamat dari usia2 jadi juga merupakan &usia2.keduanya sama
	//menampilkan alamat dari variabel ptr. alamat ini tidak diperlukan
	printf("\n(&ptr) %x ", &ptr);
	
	getch();
}
