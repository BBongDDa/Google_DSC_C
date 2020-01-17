#include<stdio.h>
#include<string>

struct Person {
	char name[20];
	int age;
	char address[100];
}

int main() {
	struct Person A[3];
	struct Person *B[3];
	B[0] = &A[0];

	B[1] = &A[1];
	B[2] = &A[2];

	for (int i = 0; i < 3; i++)
	{
		scanf_s("%s", &A[i].name);
		scanf_s("%s", &A[i].age);
		scanf_s("%s", &A[i].address);
	}~

	for (int j = 0; j < 3; j++)
	{
		printf("%s\n%d\n%s\n",);
	}

}