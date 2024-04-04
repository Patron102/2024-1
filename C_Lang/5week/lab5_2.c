#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	int person, order;

	printf("전체 인원 : ");
	scanf("%d", &person);

	order = (person / 2) - (person % 2);

	printf("주문 피자 수 : %d\n", order);
	printf("피자 가격 : %d원", order * 12000);

	return 0;
}