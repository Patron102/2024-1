#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	int person, order;

	printf("��ü �ο� : ");
	scanf("%d", &person);

	order = (person / 2) - (person % 2);

	printf("�ֹ� ���� �� : %d\n", order);
	printf("���� ���� : %d��", order * 12000);

	return 0;
}