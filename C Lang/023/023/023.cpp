#include <stdio.h>
int main()
{
	int a,b;

	a=3;
	b=a+5;

	printf("a�� �� : %d \n", a);
	printf("b�� �� : %d \n", b);

	printf("���� a�� �ּ� : %x \n", &a);
	printf("���� b�� �ּ� : %x \n", &b);

	return 0;
}