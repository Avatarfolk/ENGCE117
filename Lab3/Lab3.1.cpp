#include <stdio.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

void upgrade(struct student child);

	int main() {
 	struct student aboy ;
 		aboy.sex = 'M' ;
 		aboy.gpa = 3.00 ;
 		upgrade(aboy) ;
 		printf( "%.2f", aboy.gpa ) ;
 	return 0 ;
}//end function

void upgrade(struct student child) {
    if (child.sex == 'M') {  
        child.gpa * 0.10;
    } else if (child.sex == 'F') {
        child.gpa * 0.20;
    }
}
// ���gpa��������ҡ�դ����3.00 ����͹���


