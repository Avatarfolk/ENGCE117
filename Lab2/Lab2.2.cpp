#include <stdio.h>
#include <string.h>


char* reverse( char str1[] ) ;

char* reverse( char str1[] ) {
	int n, z = 0 ;
	int length = strlen( str1 ) ;
	char *str2 = new char[length] ;
	for( n = length - 1 ; n >= 0 ; n-- ) {
		str2[z] = str1[n] ;
		z++ ;
	}
	str2[z] = 0 ;
	return str2 ; 
}

int main() {
 char text[ 50 ] = "I Love You" ;
 char *out ;
 out = reverse( text ) ;
	printf( "NormalText : %s \n\n", text ) ;
	printf( "ReverseText : %s", out ) ;

}//end function


