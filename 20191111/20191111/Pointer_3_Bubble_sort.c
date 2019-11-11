#include <stdio.h>
#define SIZE 5

void swap(int* a, int size)
{
	int i, j;
	int temp;
	for (i = size - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	//Bubble_sort

}

int main() {
	int* a;
	int b[SIZE];
	for (int j = 0; j < SIZE; j++) {
		scanf_s("%d", &b[j]);

	}
	a = b;
	swap(a, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%2d", *a);
		a++;
	}

	//printf("%d", *a);
}