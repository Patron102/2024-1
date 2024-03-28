#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
#define TRATE 0.045

//scanf 오류 생길 시, 속성 -> SDL검사 끄고, 전처리기 정의 마지막에 ';_CRT_SECURE_NO_WARNINGS'넣기

int main() {
	int pay;
	double hour, tax, total;

	printf("시급과 일한 시간 입력 : ");
	scanf("%d %lf", &pay, &hour);

	total = pay * hour;
	tax = total * TRATE;

	printf("주급 : %.2f", total-tax);

	return 0;
}
