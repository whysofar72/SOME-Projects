#include <stdio.h>
void main()
{
	int BirthYear;
	int BirthMonth; 
	int BirthDay;

	printf("�¾ �⵵�� �Է��Ͻÿ� : ");
	scanf("%d", &BirthYear);
	printf("�¾ ���� �Է��Ͻÿ� : ");
	scanf("%d", &BirthMonth);
	printf("�¾ ���� �Է��Ͻÿ� : ");
	scanf("%d", &BirthDay);

	printf("%d %02d %d \n", BirthYear, BirthMonth, BirthDay);
}