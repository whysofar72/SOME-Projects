#include <stdio.h>
int main()
{
	const int THISYEAR = 2010;
	const int AGE = 18;
	const int BAGE = 15;
	int by;
	int bby;

	printf("올해는 %d년입니다. \n", THISYEAR);
	printf("내 나이는 %d입니다. \n", AGE);
	printf("Birthyear?");
	scanf_s("%d", &by);
	printf("나는 %d년에 태어나 %d번째 해가 되었습니다. \n", by, THISYEAR - by + 1);
	printf("내 동생의 나이는 %d입니다. \n", BAGE);
	printf("Sibling's Birthyear?");
	scanf_s("%d", &bby);
	printf("내 동생은 %d에 태어나 %d번째 해가 되었습니다. \n", bby, THISYEAR - bby + 1);

	return 0;
}
