#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
#define MAX 7

int main() {
	int k, arr[MAX], sum = 0;
	double ave;

	printf("%d�� ���� �Է��Ͻʽÿ� : ", MAX);
	for (k = 0; k < MAX; k++) {
		scanf("%d", &arr[k]);
		sum += arr[k];
	}
	ave = sum / MAX;
	printf("AVE = %.1lf", ave);

	return 0;
}