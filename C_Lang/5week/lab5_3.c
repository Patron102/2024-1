#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	int num1, num2;

	printf("2개 숫자를 입력 : ");
	scanf("%d %d", &num1, &num2);

	printf("두 수가 같은가? %c\n", 70 + ((num1 == num2) * 14));
	printf("num1이 더 큰가? %c\n", 70 + ((num1 > num2) * 14));
	printf("num2는 양수인가? %c\n", 70 + ((num2 > 0) * 14));

	return 0;
}