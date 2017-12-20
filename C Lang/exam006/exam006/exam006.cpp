#include <stdio.h>

int main(){
	long name[32];
	printf("Enter your name : ");
	scanf_s("%s", &name, 32);



	int a,b,c;
	printf("Enter the year you entered(put 1 letter space between the first and the last two numbers) : ");
	scanf_s("%d %d", &a, &b);

	printf("Enter your own identification code(2 position numbers) : ");
	scanf_s("%d", &c);

	printf("%s, Your Student Number is %d%d%d%d .\n", &name, 2, &b, 301, &c);

	return 0;
}