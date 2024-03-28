#include <stdio.h>

int main() {
	int pay = 10850;
	double hour = 42.5, total;
	
	total = pay * hour;

	printf("시급 : %d, %.1f시간 일함\n총합 : %.1f", pay, hour, total);

	return 0;
}
