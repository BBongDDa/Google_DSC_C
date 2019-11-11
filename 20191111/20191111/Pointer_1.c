#include <stdio.h>

int main() {
	int *k;
	int ko;
	k = &ko;
	ko = 3;
	printf("k의 값 : %d, ko의 주소 값%d\n", k, &ko);
	printf("k가 가르키고 있는 값 : %d, ko 값%d", *k, ko);
}