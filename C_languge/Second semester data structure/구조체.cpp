#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

struct Person {
	char name[20];
	int age;
	char address[20];
};

int main() {
	struct Person *p1= (Person*) malloc((sizeof(struct Person)));
	
	strcpy((*p1).name, "������");
	strcpy(p1->name, "������");
	p1->age = 17;
	strcpy(p1->address, "���� ������");
	
	printf("%s\n", p1->name);
	printf("%d\n", p1->age);
	printf("%s\n", p1->address); 
	
	free(p1);
}

