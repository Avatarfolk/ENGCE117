#include <stdio.h>
#include <stdlib.h>

int *GetSet( int *num ) ;


int *GetSet( int *num ) {
	printf( "Enter the number of Member composition : " ) ;
    scanf( "%d", num ) ;
    
    int *arr = ( int * )malloc( *num * sizeof(int) );
    
    for( int n = 0 ; n < *num ; n++ ) {
    	printf( "Enter number of Member [%d] : ", n + 1 ) ;
    	scanf( "%d", &arr[n] ) ;
	}
	return arr ;
}

int main() {
 	int *data, num ;
	
 	data = GetSet( &num ) ;
 
 	printf( "\n Total number of members = %d \n", num ) ;
    for ( int n = 0; n < num; n++ ) {
        printf( "\n Member informationr [%d] : %d\n", n + 1, data[n] ) ;
    }
    free( data ) ;
 	return 0 ;
}//end function


