#include <stdio.h>
#include <stdlib.h>

void3() {
	int grade[5];
	int sum = 0;
	int i, average;

	for (i = 0; i < 5; i++) {
		printf("성적을 입력하세요 : ");
		scanf_s("%d", &grade[i]);
	}

	for (i = 0; i < 5; i++) {
		sum += grade[i];
	}
	
	average = sum / 5;
	printf("성적평균%d\n", average);
}

void4() {
	int s[3][5] = { {170, 163,150, 180, 175},{163, 152, 182,149,178},{190,185,176,160,155} };
	int shortest[3];
	int i, j, st = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			if (s[i][j] < s[i][st]) {
				st = j;
			}
		}
		shortest[i] = s[i][st];
	}
	for (i = 0; i < 3; i++) {
		printf("%d반의 제일 작은 키는 %d이다.\n", i+1, shortest[1]);
	}
}

int main() {
	//void3();
	void4();
	system("pause");
}