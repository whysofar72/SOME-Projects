#include <stdio.h>
int main()
{
	int num1=10;
	int num2=-10;

	int result1;
	int result2;

	result1=num1>>1;
	result2=num2>>1;

	printf("비트 단위 >> 연산의 결과 %d \n", result1);
	printf("비트 단위 >> 연산의 결과 %d \n", result2);

	return 0;
}