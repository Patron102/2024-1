#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  _CRT_SECURE_NO_WARNINGS

int main() 
{
	//연습문제 1번
	printf("연습문제 1번\n");
	int ticket;

	scanf("%d", &ticket);

	switch(ticket) {
		case 1 :
			printf("돌고래 ");
			break;

		case 2 : 
			printf("10종 ");
			break;

		default :
			printf("입장권 ");
	}


	//연습문제 2번
	printf("\n\n연습문제 2번\n");
	int birth, age;

	printf("이번 달에 생일입니까? Yes = 1, No = 0 : ");
	scanf("%d", &birth);
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	if ((birth == 0) || (age < 19)) printf("탄산음료 한 잔 당첨!");
	else							printf("축하합니다! 모히또 한 잔 당첨!");


	//연습문제 3번
	printf("\n\n연습문제 3번\n");
	int coupon, con;

	printf("쿠폰 개수 입력 : ");
	scanf("%d", &coupon);
	con = coupon / 10;

	if (con == 2) printf("여행 가방");
	else if (con == 1) printf("다이어리");
	else printf("커피 한 잔");


	//연습문제 4번
	printf("\n\n연습문제 4번\n");
	int com, user;

	srand((unsigned)time(NULL));
	com = rand() % 3;

	printf("가위(0), 바위(1), 보(2) 선택 : ");
	scanf("%d", &user);
	printf("com = %d, user = %d\n", com, user);

	if (com == user) printf("비겼습니다!");
	else if ((user == 0) && (com == 2) || (user == 2) && (com == 1) || (user == 1) && (com == 0)) printf("사용자 승!");
	else printf("컴퓨터 승!");

	return 0;
}