#include <stdio.h>

int main() {

	int i = 1;//숫자시작 명시
	while (i < 10) {//조건
		printf("%d Hello World!\n", i);
		i += 2;//홀수번째 수만 출력
	}

	return 0;//
}
