#include <stdio.h>
int main()
{
	//char low = 97, up;
	//up = low - 32;

	char low, up;
	printf("LOWER CASE : ");
	scanf_s("%c", &low);
	up = low - 32;
	printf("UPPER CASE : %c \n", up);

	//printf("LOWER CASE : %c, UPPER CASE : %c \n", low, up);

	return 0;
}