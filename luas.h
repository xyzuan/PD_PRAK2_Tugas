//
// Jody Yuantoro ( 2021-147 )
// Informatics Engineering, Faculty of Engineering
// University of Muhammadiyah Malang
//

// Luas Permukaan Kubus Function
// Usage : lpkubus( $var_sisi )
int lpkubus( int s ){
	printf(" Luas permukaan kubus = %d\n", 6 * s * s);
}

// Luas Permukaan Balok Function
// Usage : lpbalok( $var_panjang , $var_lebar , $var_tinggi )
int lpbalok( int p, int l , int t ){
	printf(" Luas permukaan balok = %d\n", 2 * (( p * l ) + ( p * t ) + ( l * t )));
}

// Luas Permukaan Tabung Function
// Usage : lptabung( $var_jari-jari , $var_tinggi )
int lptabung( int r, int t2 ){
	printf(" Luas permukaan tabung = %d\n", 2 * 22 * r * ( r + t2 ) / 7 );
}