#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	int num1, num2;

	printf("2�� ���ڸ� �Է� : ");
	scanf("%d %d", &num1, &num2);

	printf("�� ���� ������? %c\n", 70 + ((num1 == num2) * 14));
	printf("num1�� �� ū��? %c\n", 70 + ((num1 > num2) * 14));
	printf("num2�� ����ΰ�? %c\n", 70 + ((num2 > 0) * 14));

	return 0;
}