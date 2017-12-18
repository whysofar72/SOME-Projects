#include <stdio.h>
int main()
{
	int num1=2, num2=4;
	int result1, result2, result3, result4;

	result1=(num1>num2);
	result2=(num1<=num2);
	result3=(num1==num2);
	result4=(num1!=num2);

	printf("result1에 저장된 값 %d \n", result1);
	printf("result2에 저장된 값 %d \n", result2);
	printf("result3에 저장된 값 %d \n", result3);
	printf("result4에 저장된 값 %d \n", result4);

	return 0;
}