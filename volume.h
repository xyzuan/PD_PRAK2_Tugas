//
// Jody Yuantoro ( 2021-147 )
// Informatics Engineering, Faculty of Engineering
// University of Muhammadiyah Malang
//

// Volume Kubus Function
// Usage : vlkubus( $var_sisi )
float vlkubus(float s){
	printf(" Volume kubus = %.2f\n", s * s * s );
}

// Volume Balok Function
// Usage : vlbalok( $var_panjang , $var_lebar , $var_tinggi )
float vlbalok(float p, float l, float t){
	printf(" Volume balok = %.2f\n", p * l * t );
}

// Volume Tabung Function
// Usage : vltabung( $var_jari-jari , $var_tinggi )
float vltabung(float r, float t2){
	printf(" Volume tabung = %.2f\n", 3.14 * r * r * t2 );
}

// Volume Kerucut Function
// Usage : vlkerucut( $var_tinggi , $var_jari-jari , $var_garis-pelukis )
float vlkerucut( float t3, float r2 ){
	printf(" Volume permukaan kerucut = %.2f\n", 0.3 * 3.14 * r2 * r2 * t3 );
}

// Volume Bola Function
// Usage : vlbola( $var_jari-jari )
float vlbola( float r3 ){
	printf(" Volume bola = %.2f\n", 1.3 * 3.14 * r3 * r3 * r3 );
}