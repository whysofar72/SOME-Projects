#include <stdio.h>
int main()
{
	int age;

	printf("What is your age? : ");
	scanf_s("%d", &age);
	printf("Wow! Really? Are you %d years old? \n", age);


	int old;

	printf("What about you? How old are you? : ");
	scanf_s("%d", &old);
	printf("Wow! Seriously? You really %d years old? \n", old);


	printf("Yes, I'm ");

	int a = age, b = old;

	for (a; b;)
	{
		if (a>b){
			printf("%d years older", a - b);
			break;
		}
		if (a - b<0){
			printf("%d years younger", b - a);
			break;
		}
	}
	printf(" than you are \n");

	return 0;
}