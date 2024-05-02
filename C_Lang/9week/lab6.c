#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char rule[8][11] = { "stple:0", "4card:1", "fhouse:2", "flush:3","straight:4", "triples:5", "2pair:6", "1pair:7"};
	int com[2], user[2], chip = 10, bet, k;

	srand((unsigned)time(NULL));
	for (k = 1; k < 6; k++) {
		com[0] = rand() % 13 + 1;
		user[0] = rand() % 13 + 1;
		com[1] = rand() % 8;
		user[1] = rand() % 8;
		printf("\nyou = [%d] %s", user[0], rule[user[1]]);
		printf("\nchip = %d 배팅(0은 포기) : ", chip);
		scanf("%d", &bet);
		printf("com = [%d] %s\n", com[0], rule[com[1]]);
	}
}