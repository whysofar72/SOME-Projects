#include <stdio.h>
void main()
{
	int BirthYear;
	int BirthMonth;
	int BirthDay;

	printf("�¾ �⵵�� �Է��Ͻÿ� : ");
	scanf_s("%d", &BirthYear);
	printf("�¾ ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &BirthMonth);
	printf("�¾ ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &BirthDay);

	printf("%d %02d %d \n", BirthYear, BirthMonth, BirthDay);
}