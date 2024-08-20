#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct person {
	int age;
	char name[64];
};



int main()
{
	struct person * frank= malloc(sizeof(struct person));
	frank->age = 20;
	strcpy(frank->name, "Frank");
	struct person joe;

	joe.age = 20;

	strcpy(joe.name, "Joe");
	printf("Age: %d\n", frank->age);
	printf("Name: %s\n", frank->name);
	return 0;
}

