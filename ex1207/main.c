#include <stdio.h>
#include <stdlib.h>

struct Book {
	int number;
	char title[10];

};

int main(void) {

	int i;
	struct Book** bookshelf;

	bookshelf = (struct Book**)malloc(3 * sizeof(struct Book*));

	for (i = 0; i < 3; i++) {
		bookshelf[i] = (struct Book*)malloc(10 * sizeof(struct Book));
	}



	//����ü ������ 3���� ���� ����Ű�� �ּ� ����
	for (int i = 0; i < 3; i++)
		free(bookshelf[i]); //bookshelf������ 3���� ����Ű�� ���ڵ� ���� ����

	//����ü ���� �����Ͱ� ����Ű�� �ּ� ����
	free(bookshelf);//bookshelf ������ 3�� ��ü ����. 





}