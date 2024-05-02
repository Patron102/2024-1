#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int arr[5], k, sum = 0;
	double ave;

	printf("5개의 값을 입력하시오 : ");
	for (k = 0; k < 5; k++) {
		scanf("%d", &arr[k]);
		sum += arr[k];
	}

	ave = sum / 5;
	printf("\nAVE = %.1f", ave);

	return 0;
}