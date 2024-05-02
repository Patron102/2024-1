#include <stdio.h>
#include <stdlib.h>

int main() {
	int flw[59], k, jul, met;

	for (met = 0; met < 59; met++) flw[met] = rand() % 26;
	for (k = 25; k >= 0; k--) {
		system("cls");
		for (jul = 0; jul < 26; jul++) {
			for (met = 0; met < 59; met++) {
				if ((flw[met] + k) == jul) printf(" @");
				else if ((flw[met] + k) < jul) printf(" |");
				else printf("  ");
			}
			printf("\n");
		}
		system("timeout 2 > NULL");
	}
	return 0;
}