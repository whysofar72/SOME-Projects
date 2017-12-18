#include <stdio.h>
int main(void)
{
	int a,b;
	int c; //올바른 변수 선언 위치. 함수 안에서 변수는 가장 먼저 선언되어야 한다.

	a=1,b=2;

	//int c; //잘못된 변수 선언 위치
	c=3;

	printf("a의 값 : %d \n", a);
	printf("b의 값 : %d \n", b);
	printf("c의 값 : %d \n", c);

	return 0;
}