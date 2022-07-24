#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, result;

	i = 1000;
	j = 0;
	result = 0;

	for (j; j < i; j++) { //j가 i보다 커질때까지  j=j+1
		result += j; // result=result+j;
		if (result > 1000) {
			break;
		}
	}
	printf(" 마지막으로 더한 숫자 = %d, 최종값= %d \n", j, result);
}