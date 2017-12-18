#include <stdio.h>
int main()
{
	int num1=20, num2=18; //숫자가 무엇이 되든 비트 단위로 비교하여 AND연산하여 두 정수 중 동일 비트에서 1,1값으로 일치하는 경우에만 1로 계산하여 도출.
	int result1;

	result1=num1&num2;
	printf("비트 단위 & 연산의 결과 %d \n", result1);

	return 0;
}