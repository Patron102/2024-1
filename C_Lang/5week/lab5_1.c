#include <stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{
	int person, amount, pack, bottle;

	printf("전체 인원과 1인당 생수 개수 입력 : ");
	scanf("%d %d", &person, &amount);

	pack = 10000;
	bottle = 900;

	printf("팩 구매 비용 : %d원\n", ((person * amount) / 15) * 10000);
	printf("낱개 구매 비용 : %d원\n", ((person * amount) % 15) * 900);
	printf("전채 구매 비용 : %d원\n", (((person * amount) / 15) * 10000) + (((person * amount) % 15) * 900));


	return 0;
}