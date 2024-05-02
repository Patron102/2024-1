#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int palja[40] = { 0 };
	int vic = 0, m, k, user, pos;

	srand((unsigned)time(NULL));
	for (k = 0; k < 5; k++) {
		pos = rand() % 40;
		palja[pos] = 8;
		for (m = 0; m < 40; m++) printf("%2d ", m);
		printf("\n");
		for (m = 0; m < 40; m++) printf(" %d ", palja[m]);
		system("timeout 2 > NULL");
		system("cls");

		printf("\n\n 8은 몇 번에?");
		scanf("%d", &user);
		if (user == pos) printf("\n 맞췄음! %d번 찾음\n\n", ++vic);
		else printf("\n 틀렸음! %d번 찾음\n\n", vic);
		palja[pos] = 0;
	}
	return 0;
}