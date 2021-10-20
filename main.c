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

float main(){
	
	int bangunruang;
	
	// Variabel Kubus
	float s;
	
	// Variabel Balok
	float p,l,t;
	
	// Variabel Tabung
	float r;
	float t2;
	
	// Variabel Kerucut
	float r2;
	float t3;
	float s2;

	// Variabel Bola
	float r3;

	// Main Menu
	main:
	printf("================================================\n");
	printf("  Program Penghitung Luas tes Permukaan & Volume\n");
	printf("================================================\n");
	printf(" 1. Kubus\n");
	printf(" 2. Balok\n");
	printf(" 3. Tabung\n");
	printf(" 4. Kerucut\n");
	printf(" 5. Bola\n");
	printf(" 6. Keluar program\n");
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
  	   		scanf("%f", &s);
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
			scanf("%f", &p);
			printf(" Masukkan lebar balok : ");
			scanf("%f", &l);
			printf(" Masukkan tinggi balok : ");
			scanf("%f", &t);
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
			scanf("%f", &r);
			printf(" Masukkan tinggi: ");
			scanf("%f", &t2);
			/* Output Tabung */
			printf("\n");
			printf(" Output: \n");
			vltabung(r,t2);
			lptabung(r,t2);
			break;

		// Kerucut
		case 4:
			system("cls");
			printf("===================================\n");
			printf("==      Menghitung Kerucut      ===\n");
			printf("===================================\n");
			printf(" Masukkan tinggi: ");
			scanf("%f", &t3);
			printf(" Masukkan jari - jari: ");
			scanf("%f", &r2);
			printf(" Masukkan garis pelukis: ");
			scanf("%f", &s);
			/* Output Kerucut */
			printf("\n");
			printf(" Output: \n");
			vlkerucut(t3,r2);
			lpkerucut(t3,r2,s2);
			break;

		// Bola
		case 5:
			system("cls");
			printf("===================================\n");
			printf("==        Menghitung Bola       ===\n");
			printf("===================================\n");
			printf(" Masukkan jari - jari: ");
			scanf("%f", &r3);
			/* Output Bola */
			printf("\n");
			printf(" Output: \n");
			vlbola(r3);
			lpbola(r3);
			break;
		// Keluar Program
		case 6:
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