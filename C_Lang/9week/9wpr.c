#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

//�������� 1�� �Լ�
double print_score(int score[], int size) {
	int sum = 0, k;

	printf("�������� 1��\n");
	for (k = 0; k < size; k++) {
		printf("%d = %d��, ", k, score[k]);
		sum += score[k];
	}
	return (sum / size);
}

//�������� 2�� ����
#define HGT 24
#define WTH 60

//�������� 4�� ����
#define LEN 40

int main() {
//�������� 1��
	int score[5] = { 75, 84, 13, 96, 46 };
	double ave;

	ave = print_score(score, 5);
	printf("\n��� : %.1f", ave);

//�������� 2��
	system("timeout 3 > NULL");
	system("cls");
	printf("�������� 2��");
	system("timeout 3 > NULL");

	int k, jul, met, sound[WTH];

	for (k = 0; k < 200; k++) {
		system("cls");
		for (met = 0; met < WTH; met++) sound[met] = rand() % (HGT+1);

		for (jul = 0; jul <= HGT; jul++) {
			for (met = 0; met < WTH; met++) {
				if (sound[met] <= jul) printf("��");
				else printf("  ");
			}
			printf("\n");
		}
	}

//�������� 3��
	system("cls");
	printf("�������� 3��");
	system("timeout 3 > NULL");

	for (k = 0; k < 200; k++) {
		system("cls");
		for (met = WTH; met >= 0; met--) sound[met] = rand() % (HGT);

		for (jul = HGT; jul > 0; jul--) {
			for (met = WTH; met >= 0; met--) {
				if (sound[met] <= jul) printf("��");
				else printf("  ");
			}
			printf("\n");
		}
	}

//�������� 4��
	system("cls");
	printf("�������� 4��");
	system("timeout 3 > NULL");

	int palja[LEN] = { 0 };
	int vic = 0, m, k2, user, pos;

	srand((unsigned)time(NULL));
	for (k2 = 0; k2 < 5; k2++) {
		pos = rand() % LEN;
		palja[pos] = 8;
		for (m = 0; m < LEN; m++) printf("%2d ", m);
		printf("\n");
		for (m = 0; m < LEN; m++) printf(" %d ", palja[m]);
		system("timeout 2 > NULL");
		system("cls");

		printf("\n\n 8�� �� ����?");
		scanf("%d", &user);
		if (user == pos) printf("\n ������! %d�� ã��\n\n", ++vic);
		else {
			printf("\n Ʋ����! %d�� ã��\n\n", vic);
			break;
		}
		palja[pos] = 0;
	}

//�������� 5��
	system("cls");
	printf("�������� 5��");
	system("timeout 3 > NULL");

	int pos9[26], spd9[26], met9, k9, jul9;
	char st9r[6];

	printf("\n�����Է� : ");
	for (k9 = 0; k9 < 6; k9++) {
		scanf("%s", &st9r[k9]);
	}
	

	for (jul9 = 0; jul9 < 26; jul9++) {
		pos9[jul9] = -24;
		spd9[jul9] = rand() % 10 + 3;
	}
	for (k9 = 0; k9 < 100; k9++) {
		system("cls");
		for (jul9 = 0; jul9 < 26; jul9++) {
			pos9[jul9] = pos9[jul9] + spd9[jul9];
			if (pos9[jul9] > 115) {
				pos9[jul9] = -22;
				spd9[jul9] = rand() % 20 + 3;
			}
			for (met9 = 0; met9 < 115; met9++) {
				if (pos9[jul9] == met9) printf("%s", st9r);
				else printf("  ");
			}
			printf("\n");
		}
		system("timeout 1 > NULL");
	}
	
	return 0;
}