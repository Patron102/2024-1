#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main() 
{
	int num1;

	printf("���ڸ� �Է� : ");
	scanf("%d", &num1);

	printf("¦��E Ȧ��O : %c\n", 79 - (((num1 % 2) == 0) * 10));

	return 0;
}