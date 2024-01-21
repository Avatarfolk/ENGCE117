#include <stdio.h>
#include <string.h>

struct studentNode {
  char name[20];
  int age;
  char sex;
  float gpa;
  struct studentNode *next;
};

void InsNode(struct studentNode **pNode, char n[], int a, char s,float g); 
void GoNext(struct studentNode ***ptr);     
void DelNode(struct studentNode **pNode); 
void ShowAll(struct studentNode **walk);    

int main() {
  struct studentNode *start, **now;
  start = NULL;
  now = &start;
  InsNode(now, "one", 6, 'M', 3.11);
  ShowAll(&start);
  InsNode(now, "two", 8, 'F', 3.22);
  ShowAll(&start);
  GoNext(&now);
  InsNode(now, "three", 10, 'M', 3.33);
  ShowAll(&start);
  InsNode(now, "four", 12, 'F', 3.44);
  ShowAll(&start);
  GoNext(&now);
  DelNode(now);
  ShowAll(&start);
  return 0;
} // end function

void ShowAll(struct studentNode **walk) {
  while (*walk != NULL) {
    printf("%s ", (*walk)->name);
    walk = &(*walk)->next;
  } // end while
  printf("\n");
} // end function

void InsNode(struct studentNode **nowNode, char n[], int a, char s, float g) {
  struct studentNode *nNode = new studentNode;
  strcpy(nNode->name, n);
  nNode->age = a;
  nNode->sex = s;
  nNode->gpa = g;
  nNode->next = NULL;
  if (*nowNode == NULL) {
    *nowNode = nNode;
  } else {
    nNode->next = *nowNode;
    *nowNode = nNode;
  }
} // end function

void DelNode(struct studentNode **nowNode) {
  struct studentNode *delNode = (*nowNode)->next;
  (*nowNode)->next = delNode->next;
} // end function

void GoNext(struct studentNode ***pNode) {
  **pNode = (*(*pNode))->next;
} // end function
