#include <stdio.h>

int main(){
	char name[256];
	printf("Enter your name : ");
	scanf("%s", name);



	int a,b,c;
	printf("Enter the year you entered(put 1 letter space between the first and the last two numbers) : ");
	scanf("%d %d", &a, &b);

	printf("Enter your own identification code(2 position numbers) : ");
	scanf("%d", &c);

	printf("%s, your Student Number is %d%d%d%d .\n", name, 2, b, 301, c);

	return 0;
}