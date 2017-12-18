#include <stdio.h>
void main()
{
	int BirthYear;
	int BirthMonth; 
	int BirthDay;

	printf("태어난 년도를 입력하시오 : ");
	scanf("%d", &BirthYear);
	printf("태어난 달을 입력하시오 : ");
	scanf("%d", &BirthMonth);
	printf("태어난 날을 입력하시오 : ");
	scanf("%d", &BirthDay);

	printf("%d %02d %d \n", BirthYear, BirthMonth, BirthDay);
}