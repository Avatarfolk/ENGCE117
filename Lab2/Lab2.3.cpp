#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

void explode( char str1[], char splitter, char str2[][10], int *count ) {
    int n , z = 0 ;
    *count = 0 ; 
    
    for (n = 0 ; str1[n] != 0 ; ++n ) {
        if (str1[n] != splitter) {
            str2[*count][z++] = str1[n] ;
        } else {
            str2[*count][z] = 0 ; 
            ++(*count) ; 
            z = 0 ; 
        }
    }

    if (z > 0) {
        str2[*count][z] = 0 ;
        ++(*count);
    }
}

int main() {
    char out[20][10];
    int num ;
    explode( "I/Love/You", '/', out, &num ) ;

    for (int i = 0; i < num; ++i) {
        printf( "str2[%d] = \"%s\"\n", i, out[i] ) ;
    }
    printf( "\n" ) ;
    printf( "count : %d\n", num ) ;
    return 0 ;
}



