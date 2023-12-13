#include <stdio.h>

int *GetMatrix( int *row, int *col ) ;

int *GetMatrix( int *row, int *col ) {
	
	int *e ;
	
	printf("Enter the desired row : ") ;
	scanf("%d", row) ;
	printf("Enter the required columns : : ") ;
	scanf("%d", col) ;
	printf("\n") ;
	
	e = new int[ *row * *col ] ;
	for( int i = 0 ; i < *row ; i++ ) {
		for( int n = 0 ; n < *col ; n++ ) {
			printf( "Value of each member [%d][%d] = ", i, n ) ;
			scanf( "%d", &e[ i * *col + n ] ) ;
		}
	}
	printf("\n") ;
	printf("\nMatrix values: \n" ) ;

    for ( int r = 0; r < *row; r++ ) {

        for( int c = 0; c < *col; c++ ) {
            printf( "%d ", (e)[r * *col + c] ) ;
        }//end for loop

        printf( "\n" ) ;

    }//end for loop 
	
	return e ;
	
}

int main() {
 int *data, m, n ;
 data = GetMatrix( &m, &n ) ;
 return 0 ;
}//end function
