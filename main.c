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
	
	int bangunruang;
	
	// Variabel Kubus
	int s;
	
	// Variabel Balok
	int p,l,t;
	
	// Variabel Tabung
	int r;
	int t2;
	
	// Main Menu
	main:
	printf("================================================\n");
	printf("  Program Penghitung Luas tes Permukaan & Volume\n");
	printf("================================================\n");
	printf(" 1. Kubus\n");
	printf(" 2. Balok\n");
	printf(" 3. Tabung\n");
	printf(" 4. Keluar program\n");
	printf("================================================\n");
	printf("Masukkan pilihan anda : ");
	scanf("%d", &bangunruang);

	switch (bangunruang) {
		// Kubus
		case 1:
			system("cls");
			printf("===================================\n");
			printf("==       Menghitung Kubus       ===\n");
			printf("===================================\n");
			printf(" Masukkan Sisi Kubus : ");
  	   		scanf("%d", &s);
  	   		/* Output tabung */
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
			/* Output balok */
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
			scanf("%d", &t2);
			/* Output Tabung */
			printf("\n");
			printf(" Output: \n");
			vltabung(r,t2);
			lptabung(r,t2);
			break;
		// Keluar Program
		case 4:
			return 0;
		default:
			printf("Format input salah. . .");
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
	printf(" Tekan tombol apapun untuk kembali ke menu awal .. \n");	
	printf("==================================================\n");
	
	getch();
	system("cls");
	goto main;
}