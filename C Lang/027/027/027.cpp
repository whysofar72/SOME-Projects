#include <stdio.h>
int main(void)
{
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;

	num1 += num2; //num1=num1+num2;
	printf("���� ���� ���� ��� num1�� ������ : %d \n", num1);

	num2 -= 2; //num2=num2-2;
	printf("���� ���� ���� ��� num2�� ������ : %d \n", num2);

	num3 *= 2; //num3=num3*2;
	printf("���� ���� ���� ��� num3�� ������ : %d \n", num3);

	num4 /= 2; //num4=num4/2;
	printf("���� ������ ���� ��� num4�� ������ : %d \n", num4);

	num5 %= 2; //num5=num5%2;
	printf("���� ������ ���� ��� num5�� ������ : %d \n", num5);

	return 0;
}