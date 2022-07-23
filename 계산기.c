#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, z, i ; //j=0으로 초기화해서 값이 제곱할때 0으로 고정되어있었음 .
	int result;
	char y;

	for (;;) {
		printf("계산기 c누르면 화면제거, q 누르면 종료 정수와 부호를 입력해주세요.\n");
		scanf_s("%d", &x);
		scanf_s("%c", &y);
		scanf_s("%d", &z);
		switch (y) {
		case '+':
			printf("%d\n", x + z);
			break;
		case '-':
			printf("%d\n", x - z);
			break;
		case '*':
			printf("%d\n", x * z);
			break;
		case '/':
			printf("%3f\n",(double) x /(double) z); //변수를 실수형(double)로 선언을 해야 값이 정상적으로 출력
			break;
		case '^':
			for (i = 1,result=1; z >= i; ++i) {
				result = result * x;
			}
			printf("%d\n", result);
			break;
		default :
			printf("지원하지 않는 부호입니다.\n");
			break;
		case 'c':
			system("cls");
			break;
		case 'q':
			exit(0);
			break;
		}
	}
}