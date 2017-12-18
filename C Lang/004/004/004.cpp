#include <stdio.h>
int main()
{
	printf("%03d, %03d, %03d \n", 1, 20, 300);
	printf("%-3d, %-3d, %-3d \n", 1, 20, 300);
	printf("%+3d, %+3d, %+3d \n", 1, 20, 300);
	printf("%+3d, %+3d, %+3d \n", 1, 20, -300);

	printf("%05d, %05d, %05d \n", 2, 4, 823);
	printf("%-5d, %-5d, %-5d \n", 2, 4, 823);
	printf("%+5d, %+5d, %+5d \n", 2, 4, 823);
	printf("%+5d, %+5d, %+5d \n", -2, -4, -823);

	return 0;
}