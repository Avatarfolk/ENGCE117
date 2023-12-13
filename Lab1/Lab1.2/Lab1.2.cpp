#include <stdio.h>
#include <string.h>

void GetSet( int Arr[], int *num ) ;


void GetSet( int Arr[], int *num ) {
	printf( "Enter the number of Member composition : " ) ;
    scanf( "%d", num ) ;
    
    for( int n = 0 ; n < *num ; n++ ) {
    	printf( "Enter number of Member [%d] : ", n+1 ) ;
    	scanf( "%d", &Arr[n] ) ;
	}
}

int main() {
 int data[10], num ;

 GetSet( data, &num ) ;
 
 printf("\n Total number of members = %d \n", num ) ;
    for (int n = 0; n < num; n++) {
        printf("\n Member informationr [%d] : %d\n", n + 1, data[n]);
    }
 
 return 0 ;
}//end function


