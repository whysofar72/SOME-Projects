#include <stdio.h>
int main()
{
	const int THISYEAR = 2010;
	const int AGE = 18;
	const int BAGE = 15;
	int by;
	int bby;

	printf("���ش� %d���Դϴ�. \n", THISYEAR);
	printf("�� ���̴� %d�Դϴ�. \n", AGE);
	printf("Birthyear?");
	scanf_s("%d", &by);
	printf("���� %d�⿡ �¾ %d��° �ذ� �Ǿ����ϴ�. \n", by, THISYEAR - by + 1);
	printf("�� ������ ���̴� %d�Դϴ�. \n", BAGE);
	printf("Sibling's Birthyear?");
	scanf_s("%d", &bby);
	printf("�� ������ %d�� �¾ %d��° �ذ� �Ǿ����ϴ�. \n", bby, THISYEAR - bby + 1);

	return 0;
}
