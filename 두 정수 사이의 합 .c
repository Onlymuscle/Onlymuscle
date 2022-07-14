#include<stdlib.h>
#include<stdio.h>

void main()
{
	int i, j, sum; //i,j,sum 값 선언
	sum = 0; // sum 값을 0으로 초기화

	printf("이 코드는 두 정수 사이의 합을 구하는 코드입니다.\n"); // 설명출력
	printf("정수 하나를 입력해주세요\n"); //문장출력 
	scanf_s("%d", &i); //i 값을 입력받는다
	printf("정수 하나를 입력해주세요\n"); //문장출력
	scanf_s("%d", &j); // j 값을 입력받는다

	if (i == j) { //i가 j와 크기가 같다면
		sum = i; //sum 값은 i값으로 초기화 한다 
	}
	else if (i < j) { //j가 i 보다 크다면
		for (i; i <= j; i = i + 1) //최초값 i를 i가 j보다 커질때까지 i=i+1을 반복한다 3;3>5
			sum = sum + i; //sum값을 0으로 초기화 후 i값을 받아 계산한다
	}
	else{
		for (j; j <= i; j = j + 1) //최촛값 j;j가 i보다 크거나 같아질때까지 j=j+1을 반복을한다
			sum = sum + j; //sum값을 0으로 초기화 후 j값을 더하는것을 반복한다
	}
	printf("두 정수 사이의 합은 %d\n", sum);
}