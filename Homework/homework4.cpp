#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char data[10] ;
    struct Node* next ;
};

void swapNodes ( struct Node **head_ref, char *key1, char *key2 ) {
    if ( strcmp ( key1, key2 ) == 0 ) return ;

    struct Node *prev1 = NULL, *curr1 = *head_ref ;
    while ( curr1 && strcmp ( curr1->data, key1 ) != 0 ) {
        prev1 = curr1 ;
        curr1 = curr1->next ;
    }

    struct Node *prev2 = NULL, *curr2 = *head_ref ;
    while ( curr2 && strcmp ( curr2->data, key2 ) != 0 ) {
        prev2 = curr2 ;
        curr2 = curr2->next ;
    }

    if ( !curr1 || !curr2 ) return ;

    if ( prev1 )
        prev1->next = curr2 ;
    else
        *head_ref = curr2 ;

    if ( prev2 )
        prev2->next = curr1 ;
    else
        *head_ref = curr1 ;

    struct Node *temp = curr2->next ;
    curr2->next = curr1->next ;
    curr1->next = temp ;
}

void append ( struct Node** head_ref, char *new_data ) {
    struct Node* new_node = ( struct Node* )malloc( sizeof ( struct Node ) ) ;
    struct Node* last = *head_ref ;
    strcpy( new_node->data, new_data ) ;
    new_node->next = NULL ;
    if ( *head_ref == NULL ) {
        *head_ref = new_node ;
        return ;
    }
    while ( last->next != NULL ) last = last->next ;
    last->next = new_node ;
    return ;
}

void printFormattedList(struct Node* node) {
    printf( "Start > " ) ;
    while ( node != NULL ) {
        printf( "%s", node->data ) ;
        if ( node->next != NULL )
            printf( " > " ) ;
        node = node->next ;
    }
    printf( "\n" ) ;
}

int main() {
    struct Node* start = NULL ;
    append( &start, "One" ) ;
    append( &start, "Two" ) ;
    append( &start, "Three" ) ;
    append( &start, "Four" ) ;
    append( &start, "Five" ) ;

    printf( "Original number: \n" ) ;
    printFormattedList( start ) ;

    swapNodes(&start, "One", "Four");
     printf( "\n" );
    printf( "number after swapping nodes 'One' and 'Four': \n" ) ;
    printFormattedList( start ) ;

    return 0 ;
}

