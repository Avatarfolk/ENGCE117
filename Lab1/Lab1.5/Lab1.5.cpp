#include <stdio.h>

void GetMatrix( int **value, int *row, int *col ) ;



void GetMatrix( int **value, int *row, int *col ) {
	
			
		printf("Enter the desired row : ") ;
		scanf("%d", row) ;
		printf("Enter the required columns : ") ;
		scanf("%d", col) ;
		printf("\n") ;
	
		*value = new int[ *row * *col] ;
	for(int i = 0 ; i < *row ; i++) {
		
		for(int n = 0 ; n < *col ; n++){
			printf("Value of each member [%d][%d] = ", i, n);
			scanf("%d", &(*value)[ i * *col + n]);
		}//end loop for
		
	}//end loop for
		printf("\n") ;
	printf("Matrix values: \n");

    for (int r = 0; r < *row; r++) {

        for (int c = 0; c < *col; c++) {
            printf("%d ", (*value)[r * *col + c]);
        }

        printf("\n");

    }//end for loop 
	
}//end function

	int main() {
 	int *data, m , n ;
 	GetMatrix( &data, &m , &n ) ;
 return 0 ;
}//end function
