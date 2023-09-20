#include <stdio.h>

int main() {
	int num = 0;//숫자 입력
	printf("숫자를 입력하시오:");
	scanf_s("%d", & num);
	if (num == 0) {//변수에 숫자 받기
		printf("zero\n");
	}
	if (num == 1) {
		printf("one\n");

	}
	if (num == 2) {
		printf("two\n");
	}
	else { printf("not 0~2"); }
		

}
