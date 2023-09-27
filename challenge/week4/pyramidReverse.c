#include <stdio.h>

int main()
{
	int floor;
	printf("¸î ÃþÀ» ½×°Ú½À´Ï±î? (5~100)");
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		for (int j = 2 * floor - 1; j > 2 * i; j--) {
			printf("*");
		}
		printf("\n");
	}
}
