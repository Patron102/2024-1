#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  _CRT_SECURE_NO_WARNINGS

int main() 
{
	//�������� 1��
	printf("�������� 1��\n");
	int ticket;

	scanf("%d", &ticket);

	switch(ticket) {
		case 1 :
			printf("���� ");
			break;

		case 2 : 
			printf("10�� ");
			break;

		default :
			printf("����� ");
	}


	//�������� 2��
	printf("\n\n�������� 2��\n");
	int birth, age;

	printf("�̹� �޿� �����Դϱ�? Yes = 1, No = 0 : ");
	scanf("%d", &birth);
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);

	if ((birth == 0) || (age < 19)) printf("ź������ �� �� ��÷!");
	else							printf("�����մϴ�! ������ �� �� ��÷!");


	//�������� 3��
	printf("\n\n�������� 3��\n");
	int coupon, con;

	printf("���� ���� �Է� : ");
	scanf("%d", &coupon);
	con = coupon / 10;

	if (con == 2) printf("���� ����");
	else if (con == 1) printf("���̾");
	else printf("Ŀ�� �� ��");


	//�������� 4��
	printf("\n\n�������� 4��\n");
	int com, user;

	srand((unsigned)time(NULL));
	com = rand() % 3;

	printf("����(0), ����(1), ��(2) ���� : ");
	scanf("%d", &user);
	printf("com = %d, user = %d\n", com, user);

	if (com == user) printf("�����ϴ�!");
	else if ((user == 0) && (com == 2) || (user == 2) && (com == 1) || (user == 1) && (com == 0)) printf("����� ��!");
	else printf("��ǻ�� ��!");

	return 0;
}