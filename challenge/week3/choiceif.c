#include <stdio.h>

int main() {
	int choice;
	//선택지 (1,2,3)
	printf("1, 파일 저장\n");
	printf("2,저장 없이 닫기\n");
	printf("3, 종료\n");
	scanf_s("%d", &choice);//값에 따라서 다른 결과값 출력

	if (choice == 1)
	{
		printf("파일을 저장합니다.\n");
	}
	if (choice == 2)
	{
		printf("저장 없이 닫습니다.\n");
	}
	if(choice==3)
	{
		printf("종료합니다.\n");
	}
	else { printf("잘못 입력하셨습니다.\n"); }


}
