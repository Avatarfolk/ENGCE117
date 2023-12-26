#include <stdio.h>
#include <string.h>

int *GetSet( int * ) ;

int main() {
 int *data, num ;
 data = GetSet( &num ) ;
 return 0 ;
}//end function

int *GetSet( int * ) {
	int *data, num ;
	printf( "Enter the number of Member composition : " ) ;
	scanf( "%d", &num ) ;
	
	for( int n = 0 ; n < num ; n++ ) {
		printf( "Enter number of Member [%d] : ", n + 1 ) ;
		scanf( "%d", &data[ n ] ) ;
	}
	printf( "\n Total number of members = %d \n", num ) ;
	for( int z = 0 ; z < num ; z++ ) {
		printf( "\n Member informationr [%d] : %d\n", z + 1, data[ z ] ) ;
	}
}
