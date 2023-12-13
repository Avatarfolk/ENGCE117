#include <stdio.h>

int GetSet(int *arr) ;

int GetSet(int *arr) {
	int num ;
	printf( "Enter the number of Member composition : " ) ;
    scanf( "%d", &num ) ;
    
    for( int n = 0 ; n < num ; n++ ) {
    	printf( "Enter number of Member [%d] : ", n + 1 ) ;
    	scanf( "%d", &arr[n] ) ;
	}
	return num ;
}

int main() {
 	int data[ 10 ] ; 
    int num = GetSet( data ) ;
 
 	printf( "\n Total number of members = %d \n", num ) ;
    for ( int n = 0; n < num; n++ ) {
        printf( "\n Member informationr [%d] : %d\n", n + 1, data[n] ) ;
    }

 	return 0 ;
}//end function


