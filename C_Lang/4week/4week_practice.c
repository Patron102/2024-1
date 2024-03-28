#include <stdio.h>

int main() {
	//연습문제 1번
	long long money = 30000000000;
	printf("연습문제 1번\nchunsur = %lld\n\n", money);

	//연습문제 2번
	double fnum = 0.123456789;
	printf("연습문제 2번\ndouble = %.9lf\n\n", fnum);

	//연습문제 3번
	char alp = 'A';
	printf("연습문제 3번\nchar = %c\n\n", alp);

	//연습문제 4번
	short pay1 = 15000;
	long pay2 = pay1 * 10;
	printf("연습문제 4번\npay1 = %ld\npay2 = %ld\n\n", pay1, pay2);
	
	//연습문제 5번
	double money2 = 30000000000;
	printf("연습문제 5번\ndouble = %.3lf\n지수형 = %.1e", money2, money2);

	return 0;
}
