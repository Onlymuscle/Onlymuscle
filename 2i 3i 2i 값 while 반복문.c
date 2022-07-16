#include<stdio.h>
#include<stdlib.h>

#define True 1

void main()
{
	int i = 0, j = 0;

	while (True) {
		if (i == 30) {
			break; //i 값이 30이되면 break
		}
		i = i + 1; // i값을 1씩 더하고
		j = 2 * i; // j값은 2*i다
		if (i <= 10) { //10이 i보다 크거나 같으면 출력
			printf("1 ~ 10까지의 2i 값은 %d \n", j);
		}
		if (i > 10 && i < 21) { //i 값이 10보다 크거나 21이 i 값보다 작으면 출력
			j = 3 * i; //j값은 3*j 값
			printf("11 ~ 20 사이의 3i 값 %d \n", j);
		}
		if (i >= 21 && i <= 30) {
			printf("21 ~ 30 까지의 2i 값 %d \n", j);
		}
	}
}



