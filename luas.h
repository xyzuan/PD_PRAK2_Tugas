//
// Jody Yuantoro ( 2021-147 )
// Informatics Engineering, Faculty of Engineering
// University of Muhammadiyah Malang
//

void lpkubus(int s){
	printf(" Luas permukaan kubus = %d\n", 6 * s * s);
}

void lpbalok(int p, int l, int t){
	printf(" Luas permukaan balok = %d\n", 2 * (( p * l ) + ( p * t ) + ( l * t )));
}

void lptabung(int r, int t2){
	printf(" Luas permukaan tabung = %d\n", ( 2 * 3.14 * r * r ) + ( 2 * 3.14 * r * t2 ));
}