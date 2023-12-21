#include <stdio.h>

struct student {
    char name[50] ;
    int age ;
    char grade[5] ;
};

struct student ( *GetStudent( int *room ) )[10] ;

struct student ( *GetStudent( int *room ) )[10] {
    printf( "Enter the number of classrooms: " ) ;
    scanf( "%d", room ) ;

    static struct student children[20][10] ;

    for ( int n = 0 ; n < *room ; ++n ) {
        printf( "\n=================================\n" ) ;
        printf( "Student information | %d |\n\n", n + 1 ) ;
        for ( int z = 0 ; z < 10 ; ++z ) {
            printf( "Enter name  student %d: ", z + 1 ) ;
            scanf( "%s", children[n][z].name ) ;

            printf( "Enter age  student %d: ", z + 1 ) ;
            scanf( "%d", &children[n][z].age ) ;

            printf( "Enter grade  student %d: ", z + 1 ) ;
            scanf( "%s", children[n][z].grade ) ;

            printf( "\n=================================\n" ) ;
        }
    }
		return children ;
}

int main() {
    struct student ( *children )[10] ;
    int group;
    children = GetStudent( &group ) ;
    return 0 ;
}//End function


