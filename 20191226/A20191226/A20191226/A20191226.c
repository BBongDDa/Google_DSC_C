#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
typedef struct node {
	char* name;
	struct node* link;
} node;
node* head = NULL, * new_node = NULL, * temp = NULL;
main() {
	int num = 0;
	char* pname = NULL;
	new_node = (node*)malloc(sizeof(node));
	if (new_node == NULL) {
		printf("memory allocation error\n");
	};
	printf("head의 주소값=%d, new_node의 주소값=%d, temp의 주소값=%d\n", &head, &new_node, &temp);
	printf("1번 이름을 입력하시오: ");
	pname = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당
	scanf("%s", pname);
	new_node->name = pname;
	new_node->link = NULL;
	head = temp = new_node;
	printf("1번 노드의 Name= %s, 주소값 = %d \n\n", new_node->name, &head->name);
	num = 2;
	while (num < 4)
	{
		new_node = (node*)malloc(sizeof(node));
		if (new_node == NULL) {
			printf("memory allocation error\n");
		}
		printf("%d번 이름을 입력하시오: ", num);
		pname = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당
		scanf("%s", pname);
		new_node->name = pname;
		new_node->link = NULL;
		temp->link = new_node;
		printf("%d번 노드의 link 값=%d\n", num - 1, temp->link); // link 확인
		printf("%d번 노드의 Name= %s, 주소값 %d \n\n", num, new_node->name, new_node);
		temp = temp->link;
		num++;
	}
	printf(" head ---> ");
	for (temp = head; temp != NULL; temp = temp->link)
		printf(" %s : %d", temp->name, temp->link);
	printf("\n");
	system("pause");
}