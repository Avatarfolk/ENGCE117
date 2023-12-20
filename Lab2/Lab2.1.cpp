#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

void reverse( char str1[], char str2[] ) {
	int n, z = 0 ;
	int length = strlen( str1 ) ;
	
	for ( n = length - 1 ; n >= 0 ; n-- ) {
		str2[z] = str1[n] ;
		z++ ;
	}
}

int main() {
	char text[50] = "I Love You" ;
    char out[50] ;
	reverse( text, out ) ;
	printf( "NormalText : %s \n\n", text ) ;
	printf( "ReverseText : %s", out ) ;
	return 0 ;
}// end function


