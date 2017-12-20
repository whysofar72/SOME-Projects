#include <stdio.h>
int main(){
	int a, b;
	printf("Enter the length of width axis : ");
	scanf_s("%d", &a);

	printf("Enter the length of height axis : ");
	scanf_s("%d", &b);
	printf("The Area value of rectangle is %d. \n", a*b);

	return 0;
}