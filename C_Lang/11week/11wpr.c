#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//�������� 1��
	char str[5] = "ABCD", * p;

	p = &str[1];
	printf("�������� 1��\n1 = %s, 2 = %c\n", p, p[1]);


	//�������� 2��
	char str2[255], * p2;

	p2 = str2;
	printf("\n\n�������� 2��\n�ҹ��� �Է� : ");
	scanf("%s", str2);

	while (*p2 != '\0') {
		if (97 <= *p2 && *p2 <= 122)
			printf("%c", *p2 - 32);
		else 
			printf("%c", *p2);
		p2++;
	}
	system("timeout 3 > NULL");

	//�������� 3�� 
	int mine[30], chip = 0, m, k, bet;
	
	srand((unsigned)time(NULL));
	for (m = 0; m < 30; m++)
		mine[m] = (rand() % 30) - 30;
	for (k = 5; k > 0; k--) {
		system("cls");
		for (m = 0; m < 30; m++) printf("%3d ", m);
		printf("\n\n");
		for (m = 0; m < 30; m++) {
			if (mine[m] < 0) printf(" -- ");
			else {
				printf("%3d ", mine[m]);
			}
		}
		printf("\n%d�� ����, chip = %d, 0~29 ���� : ", k, chip);
		scanf("%d", &bet);
		if (bet < 0 || bet > 29 || mine[bet] > 0)
			continue;
		if (mine[bet] >= -22) {
			mine[bet] += 30;
			mine[bet+1] += 30;
			chip += mine[bet];
		}
		else {
			printf("\n��! ���� ������!");
			break;
		}
	}
	printf("\n\n�� chip = %d", chip);

	return 0;
}