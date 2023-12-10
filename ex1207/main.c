#include <stdio.h>
#include <stdlib.h>

struct Book {
	int number;
	char title[10];

};

int main(void) {

	//book에 동적할당
	struct Book* bp = (struct Book*)malloc(2 * sizeof(struct Book));
	//구조체 하나당 14byte이지만 4byte단위로 계산되어 16byte로 계산됨.

	bp->number = 1; //bp는 16byte단위이므로 주소 16씩 이동. 
	strcpy(bp->title, "C programming");
	(bp + 1)->number = 2; //bp는 16byte단위이므로 주소 16씩 이동. 
	strcpy((p + 1)->title, "Electronics");

	free(bp);
	return;

}