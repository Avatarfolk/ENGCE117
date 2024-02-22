#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

class LinkedList {
protected:
    struct studentNode *start, **now;

public:
    LinkedList();
    ~LinkedList();
    void InsNode(char n[], int a, char s, float g);
    void DelNode();
    void GoNext();
    void GoFirst();
    void GoLast();
    void ShowAll();
    int FindNode(char n[]);
    struct studentNode *NowNode();
    void EditNode(char n[], int a, char s, float g);
    void EditData();
    void AddData();
    void FindData();
    void readfile();
    void writefile();
};

LinkedList::LinkedList() {
    start = NULL;
    now = &start;
}

LinkedList::~LinkedList() {
    
}

void LinkedList::InsNode(char n[], int a, char s, float g) {
    *now = new studentNode;
    strcpy((*now)->name, n);
    (*now)->age = a;
    (*now)->sex = s;
    (*now)->gpa = g;
    (*now)->next = NULL;
    now = &((*now)->next);
}

void LinkedList::DelNode() {
    if (*now != NULL) {
        studentNode *temp = *now;
        *now = (*now)->next;
        delete temp;
    }
}

void LinkedList::GoNext() {
    now = &((*now)->next);
}

void LinkedList::GoFirst() {
    now = &start;
}

void LinkedList::GoLast() {
    while ((*now)->next != NULL) {
        now = &((*now)->next);
    }
}

void LinkedList::ShowAll() {
    studentNode *current = start;
    while (current != NULL) {
        printf("Name: %s\n", current->name);
        printf("Age: %d\n", current->age);
        printf("Sex: %c\n", current->sex);
        printf("GPA: %.2f\n", current->gpa);
        printf("--------------------------\n");
        current = current->next;
    }
}

int LinkedList::FindNode(char n[]) {
    studentNode *current = start;
    int found = 0;
    while (current != NULL) {
        if (strcmp(current->name, n) == 0) {
            found = 1;
            break;
        }
        current = current->next;
    }
    return found;
}

void LinkedList::EditNode(char n[], int a, char s, float g) {
    strcpy((*now)->name, n);
    (*now)->age = a;
    (*now)->sex = s;
    (*now)->gpa = g;
}

void LinkedList::EditData() {
    char name[20];
    int age;
    char sex;
    float gpa;

    printf("Enter new data:\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("Sex: ");
    scanf(" %c", &sex);
    printf("GPA: ");
    scanf("%f", &gpa);

    EditNode(name, age, sex, gpa);
}

void LinkedList::AddData() {
    char name[20];
    int age;
    char sex;
    float gpa;

    printf("Enter data:\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("Sex: ");
    scanf(" %c", &sex);
    printf("GPA: ");
    scanf("%f", &gpa);

    InsNode(name, age, sex, gpa);
}

void LinkedList::FindData() {
    char name[20];
    printf("Enter name to search: ");
    scanf("%s", name);

    if (FindNode(name)) {
        printf("Student found.\n");
    } else {
        printf("Student not found.\n");
    }
}

void LinkedList::readfile() {
    // Implement reading data from file
}

void LinkedList::writefile() {
    // Implement writing data to file
}

int main() {
    LinkedList listA;
    int menu;

    listA.readfile();

    do {
        printf("Menu:\n");
        printf("(1) Add Data\n");
        printf("(2) Edit Data\n");
        printf("(3) Delete Data\n");
        printf("(4) Find Data\n");
        printf("(5) Show All Data\n");
        printf("(0) Exit\n");
        printf("Enter choice: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                listA.AddData();
                break;
            case 2:
                listA.EditData();
                break;
            case 3:
                listA.DelNode();
                break;
            case 4:
                listA.FindData();
                break;
            case 5:
                listA.ShowAll();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (menu != 0);

    listA.writefile();

    return 0;
}

