#include <stdio.h>

int main(){
	int a, b;

	printf("Enter two integers : ");
	scanf_s("%d %d", &a, &b);
	printf("SUM : %d + %d = %d \n", a, b, a*b);
	printf("DIF : %d - %d = %d \n", a, b, a - b);

	return 0;
}