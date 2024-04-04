#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main() 
{
	int num1;

	printf("숫자를 입력 : ");
	scanf("%d", &num1);

	printf("짝수E 홀수O : %c\n", 79 - (((num1 % 2) == 0) * 10));

	return 0;
}