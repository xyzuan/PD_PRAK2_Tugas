//
// Jody Yuantoro ( 2021-147 )
// Informatics Engineering, Faculty of Engineering
// University of Muhammadiyah Malang
//

// Library
#include <stdio.h>
#include <conio.h>
#include "luas.h"
#include "volume.h"

int main(){
	
	int pilihan;
	
	// Variabel Kubus
	int s;
	
	// Variabel Balok
	int p,l,t;
	
	// Variabel Tabung
	int r;
	int t2;
	
	
	// Main Menu
	printf("================================================\n");
	printf("  Program Penghitung Luas Permukaan & Volume\n");
	printf("================================================\n");
	printf(" 1. Kubus\n");
	printf(" 2. Balok\n");
	printf(" 3. Tabung\n");
	printf("================================================\n");
	printf("Masukkan pilihan anda : ");
	scanf("%d", &pilihan);

	switch (pilihan) {
		// Tabung
		case 1:
			system("cls");
			printf("===================================\n");
			printf("==       Menghitung Kubus       ===\n");
			printf("===================================\n");
			printf(" Masukkan Sisi Kubus : ");
  	   		scanf("%d", &s);
  	   		printf("\n");
  	   		printf(" Output: \n");
  	   		vlkubus(s);
			lpkubus(s);
			break;
		
		// Balok
		case 2:
			system("cls");
			printf("===================================\n");
			printf("==       Menghitung Balok       ===\n");
			printf("===================================\n");
			printf(" Masukkan panjang balok : ");
			scanf("%d", &p);
			printf(" Masukkan lebar balok : ");
			scanf("%d", &l);
			printf(" Masukkan tinggi balok : ");
			scanf("%d", &t);
			// Output balok
			printf("\n");
			printf(" Output: \n");
			vlbalok(p,l,t);
			lpbalok(p,l,t);
			break;
		
		// Tabung
		case 3:
			system("cls");
			printf("===================================\n");
			printf("==      Menghitung Tabung       ===\n");
			printf("===================================\n");
			printf(" Masukkan jari - jari: ");
			scanf("%d", &r);
			printf(" Masukkan tinggi: ");
			scanf("%d", t2);
			printf(" Output: \n");
			vltabung(r,t2);
			lptabung(r,t2);
			break;
		default:
			printf("Input anda salah. . .");
			break;	
	}

	/////////////
	// End Msg //
	/////////////
	printf("\n");
	printf("==================================================\n");
	printf("												  \n");
	printf(" Developed by:									  \n");
	printf(" Jody Yuantoro ( 2021-147 )						  \n");
	printf(" Informatics Engineering, Faculty of Engineering  \n");
	printf(" University of Muhammadiyah Malang				  \n");
	printf("												  \n");

	printf("==================================================\n");
	printf(" Tekan tombol apapun untuk mengakhiri program . . \n");	
	printf("==================================================\n");
	
	getch();

}