#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int bubb[30], k, jul, met, s;

	for (met = 0; met < 30; met++)
		bubb[met] = rand() % 26 + 26;
	for (k = 0; k < 300; k++) {
		system("cls");
		for (met = 0; met < 30; met++) {
			if (bubb[met] > 0) bubb[met]--;
			else bubb[met] = 26;
		}
		for (jul = 0; jul < 26; jul++) {
			for (s = 0; s < sin(jul) * 3 + 3; s++)
				printf(" ");
			for (met = 0; met < 30; met++) {
				if (bubb[met] == jul) printf("  O");
				else printf("   ");
			}
			printf("\n");
		}
	}
	return 0;
}