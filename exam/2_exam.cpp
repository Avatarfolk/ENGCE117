#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char data[20];// สร้างตัวแปรdata เพื่อเก็บข้อมูลตัวอักษร
    struct Node* back;
    struct Node* next;
};

struct Node* createNode(char *data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->data, data);
    newNode->back = NULL;
    newNode->next = NULL;
    return newNode;
}

void append(struct Node** head_ref, char *data) {
    struct Node* newNode = createNode(data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }
    struct Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->back = temp;
}

void swapNodes(struct Node** head_ref, char *key1, char *key2) {
    if (strcmp(key1, key2) == 0) return;

    struct Node *node1 = *head_ref, *node2 = *head_ref;
    struct Node *temp = NULL;

    while (node1 != NULL && strcmp(node1->data, key1) != 0) {
        node1 = node1->next;
    }
    while (node2 != NULL && strcmp(node2->data, key2) != 0) {
        node2 = node2->next;
    }

    if (node1 == NULL || node2 == NULL) {
        printf("One or both nodes not found, cannot swap.\n");
        return;
    }

    if (node1->back != NULL) {
        node1->back->next = node2;
    } else {
        *head_ref = node2;
    }

    if (node2->back != NULL) {
        node2->back->next = node1;
    } else {
        *head_ref = node1;
    }

    if (node1->next != NULL) {
        node1->next->back = node2;
    }
    if (node2->next != NULL) {
        node2->next->back = node1;
    }

    temp = node1->next;
    node1->next = node2->next;
    node2->next = temp;

    temp = node1->back;
    node1->back = node2->back;
    node2->back = temp;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("\nAddress : %d   Data : %s", node , node->data);
        if (node->next != NULL)
            printf("  ");
        node = node->next;
        
    }
    printf("\n");
}

int main() {
    struct Node* start = NULL;
    append(&start, "one");
    append(&start, "two");
    append(&start, "three");
    append(&start, "four");
    append(&start, "five");

    
    printList(start);

    char key1[20], key2[20];
    printf("\nEnter the first key: ");
    scanf("%s", key1);
    printf("Enter the second key: ");
    scanf("%s", key2);

    swapNodes(&start, key1, key2);

    printf("\nnumber after swapping nodes %s and %s : \n", key1, key2);
    printList(start);

    return 0;
}


