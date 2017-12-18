#include <stdio.h>
int main()
{
	int num1=20, num2=16; //두 숫자를 비트 단위로 OR연산하여 동일 비트 단위에서 0,0값으로 일치하는 경우를 제외하고 모두 1로 계산하여 도출
	int result1;

	result1=num1|num2;
	printf("비트 단위 | 연상의 결과 %d \n", result1);

	return 0;
}