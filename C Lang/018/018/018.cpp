#include <stdio.h>
void main()
{
	printf("문자 상수 %c %c %c는 \n", 'a', 'b', 'c');
	printf("ASCII 코드 10진수로 %d %d %d \n", 'a', 'b', 'c');
	printf("ASCII 코드 16진수로 %x %x %x \n", 'a', 'b', 'c');

	printf("\n---------------------\n");

	printf("문자 상수 %c %c %c는 \n", '!', '@', '#');
	printf("ASCII 코드 10진수로 %d %d %d는 \n", '!', '@', '#');
	printf("ASCII 코드 16진수로 %x %x %x는 \n", '!', '@', '#');
}