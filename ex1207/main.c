#include <stdio.h>
#include <stdlib.h>

struct Book {
	int number;
	char title[10];

};

int main(void) {

	//book�� �����Ҵ�
	struct Book* bp = (struct Book*)malloc(2 * sizeof(struct Book));
	//����ü �ϳ��� 14byte������ 4byte������ ���Ǿ� 16byte�� ����.

	bp->number = 1; //bp�� 16byte�����̹Ƿ� �ּ� 16�� �̵�. 
	strcpy(bp->title, "C programming");
	(bp + 1)->number = 2; //bp�� 16byte�����̹Ƿ� �ּ� 16�� �̵�. 
	strcpy((p + 1)->title, "Electronics");

	free(bp);
	return;

}