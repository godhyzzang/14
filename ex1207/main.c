#include <stdio.h>
#include <stdlib.h>

void main(void) {
	char* pc = NULL;
	int i = 0;

	pc = (char*)malloc(100 * sizeof(char));

	if (pc = NULL) {
		printf("메모리할당실패\n");
		exit(1);
	}

	for (i = 0; i < 26; i++) {
		pc[i] = 'a' + i;
	}
	pc[i] = 0; //맨 마지막에 0 문자 넣어줌. ->문자열 개행문자??
	//i 전역변수라 여기서는 제일 마지막 번호. 
	printf("%s\n", pc);




	free(pc);//malloc코드와 동시에 작성
}

