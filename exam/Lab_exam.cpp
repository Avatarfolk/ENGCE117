#include <stdio.h>

int plus(int a, int b) {
    return a + b ;
}

int minus(int a, int b) {
    return a - b ;
}

int main() {
    int A[6], B[6], Ans[7] = {0} ;  
    char  Operator ;

   printf("Enter Number A :\n") ;
        printf("A[0] : ") ;
        scanf("%d", &A[0]) ;
    	printf("A[1] : ") ;
        scanf("%d", &A[1]) ;
        printf("A[2] : ") ;
        scanf("%d", &A[2]) ;
        printf("A[3] : ") ;
        scanf("%d", &A[3]) ;
        printf("A[4] : ") ;
        scanf("%d", &A[4]) ;
        printf("A[5] : ") ;
        scanf("%d", &A[5]) ;

    printf("Enter Number B :\n") ;
        printf("B[0] : ") ;
        scanf("%d", &B[0]) ;
    	printf("B[1] : ") ;
        scanf("%d", &B[1]) ;
        printf("B[2] : ") ;
        scanf("%d", &B[2]) ;
        printf("B[3] : ") ;
        scanf("%d", &B[3]) ;
        printf("B[4] : ") ;
        scanf("%d", &B[4]) ;
        printf("B[5] : ") ;
        scanf("%d", &B[5]) ;

    printf("Operator : ") ;
    scanf(" %c", &Operator) ;  

    printf("\n\n") ;
    printf("index\t\t x 0 1 2 3 4 5 \n") ;
    
   printf("Number A :\t   ") ;
        printf("%d ", A[0]) ; 
    	printf("%d ", A[1]) ;
    	printf("%d ", A[2]) ;
    	printf("%d ", A[3]) ;
    	printf("%d ", A[4]) ;
    	printf("%d ", A[5]) ;

    printf("\nOperator :\t\t\t %c\n", Operator) ;

    printf("Number B :\t   ") ;
    	printf("%d ", B[0]) ;
    	printf("%d ", B[1]) ;
    	printf("%d ", B[2]) ;
    	printf("%d ", B[3]) ;
    	printf("%d ", B[4]) ;
    	printf("%d ", B[5]) ;

    printf("\n\t\t---------------\n") ;

    int (*Sum [2])(int, int) = {&plus, &minus} ;
    
    int AnsIndex = (Operator == '-') ;

    for (int z = 5; z >= 0; --z) {
        Ans[z + 1] += Sum [AnsIndex](A[z], B[z]) ;
        Ans[z] += Ans[z + 1] / 10 ;
        Ans[z + 1] %= 10 ;
    }

    printf("Answer\t\t ") ;
        printf("%d ", Ans[0]) ;
        printf("%d ", Ans[1]) ;
        printf("%d ", Ans[2]) ;
        printf("%d ", Ans[3]) ;
        printf("%d ", Ans[4]) ;
        printf("%d ", Ans[5]) ;
        printf("%d ", Ans[6]) ;
    

    printf("\n\t\t===============\n") ;

    return 0 ;
}
