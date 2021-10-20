//
// Jody Yuantoro ( 2021-147 )
// Informatics Engineering, Faculty of Engineering
// University of Muhammadiyah Malang
//

// Luas Permukaan Kubus Function
// Usage : lpkubus( $var_sisi )
float lpkubus( float s ){
	printf(" Luas permukaan kubus = %.2f\n", 6 * s * s);
}

// Luas Permukaan Balok Function
// Usage : lpbalok( $var_panjang , $var_lebar , $var_tinggi )
float lpbalok( float p, float l , float t ){
	printf(" Luas permukaan balok = %.2f\n", 2 * (( p * l ) + ( p * t ) + ( l * t )));
}

// Luas Permukaan Tabung Function
// Usage : lptabung( $var_jari-jari , $var_tinggi )
float lptabung( float r, float t2 ){
	printf(" Luas permukaan tabung = %.2f\n", 2 * 22 * r * ( r + t2 ) / 7 );
}

// Luas Permukaan Kerucut Function
// Usage : lpkerucut( $var_tinggi , $var_jari-jari , $var_garis-pelukis )
float lpkerucut( float t3, float r2, float s2 ){
	printf(" Luas permukaan kerucut = %.2f\n", ( 22 * r2 * r2 / 7 ) + ( 22 * r2 * s2 / 7 ));
}