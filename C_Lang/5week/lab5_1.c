#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	int person, amount, pack, bottle;

	printf("��ü �ο��� 1�δ� ���� ���� �Է� : ");
	scanf("%d %d", &person, &amount);

	pack = 10000;
	bottle = 900;

	printf("�� ���� ��� : %d��\n", ((person * amount) / 15) * 10000);
	printf("���� ���� ��� : %d��\n", ((person * amount) % 15) * 900);
	printf("��ä ���� ��� : %d��\n", (((person * amount) / 15) * 10000) + (((person * amount) % 15) * 900));


	return 0;
}