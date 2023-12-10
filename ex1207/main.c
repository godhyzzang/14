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



	//구조체 포인터 3개가 각각 가리키는 주소 해제
	for (int i = 0; i < 3; i++)
		free(bookshelf[i]); //bookshelf포인터 3개가 가리키느 ㄴ코드 각각 해제

	//구조체 이중 포인터가 가리키는 주소 해제
	free(bookshelf);//bookshelf 포인터 3개 자체 해제. 





}