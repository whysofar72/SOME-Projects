#include <stdio.h>
int main(){
	unsigned int A=0, B=0;
	printf("Enter two numbers(put space between two numbers): ");
	scanf_s("%d %d", &A, &B);
	while (A < 10 && B < 10){
		printf("A + B is %d \n", A+B);
		return 0;
	}
}