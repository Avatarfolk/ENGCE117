#include <stdio.h>

struct student {
    char name[50] ; 
    int age ;
    char grade[5] ; 
};

void GetStudent( struct student child[][10], int *room ) ;

void GetStudent( struct student child[][10], int *room ) {
    printf( "Enter the number of classrooms: " ) ;
    scanf( "%d", room ) ;

    for ( int n = 0; n < *room; ++n ) {
        printf( "\n=================================\n" ) ;
        printf( "Student information | %d |\n\n", n + 1 ) ;
        for (int z = 0; z < 10; ++z) {
            printf( "Enter Name student %d: ", z + 1 ) ;
            scanf( "%s", child[n][z].name ) ;

            printf( "Enter Age  student %d: ", z + 1 ) ;
            scanf( "%d", &child[n][z].age ) ;
            
            printf( "Enter grade  student %d: ", z + 1 ) ;
            scanf( "%s", child[n][z].grade ) ;

            printf( "=================================\n" ) ;
        }
    }
}

int main() {
    struct student children[20][10] ;
    int group ;

    GetStudent( children, &group ) ;

    return 0 ;
}//End function


