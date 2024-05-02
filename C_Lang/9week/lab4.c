#include <stdio.h>
#include <stdlib.h>

#define WTH 118
#define HGT 26

int main() {
	int rain[WTH], k, jul, met;

	for (met = 0; met < WTH; met++) rain[met] = rand() % HGT - HGT;
	for (k = 0; k < 200; k++) {
		system("cls");
		for (met = 0; met < WTH; met++) {
			if (rain[met] < HGT) rain[met]++;
			else rain[met] -= 1;
		}
		for (jul = 0; jul < HGT; jul++) {
			for (met = 0; met < WTH; met++) {
				if (rain[met] == jul) printf("|");
				else printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}