#include <stdio.h>
int main()
{
	printf("%d added %d equals %d. \n \n", 8, 10, 8 + 10);
	printf("%i added %i equals %i. \n \n", -9, -17, -9 - 17);
	printf("%d substracted %d equals %d. \n \n", 8, 10, 8 - 10);
	printf("%i substracted %i equals %i. \n \n", -9, -17, -9 - (-17));

	printf("decimal number %d equals %x in hexadecimal and %o in octal. \n \n", 50, 50, 50);
	printf("decimal number %d equals %x in hexadecimal and %o in octal. \n \n", -50, -50, -50);
	//negative numbers can't be showed in hexadecimal and octal number
	printf("As you see you can't express negative numbers in hexadecimal nor octal. \n \n");

	printf("integer : %d \n", 0.5);
	printf("real number : %f \n", 0.5);
	printf("real number : %lf \n", 0.5);

	printf("more than 6 seats below point : %f \n", 0.5762235);
	printf("more than 6 seats below point : %f \n", 0.5762234);
	printf("more than 6 seats below point : %lf \n", 0.5762235);
	printf("more than 6 seats below point : %lf \n", 0.5762234);

	printf("small 'a' in capital character goes %c. \n", 'A');
	printf("%s %c. \n", "small 'a' in capital character goes", 'A');
	printf("%s %d \n", "2 times 3 equals", 2 * 3);

	printf("%d \n", 2147483647);
	printf("%d \n", 2147483648);
	printf("%u \n", 4294967295);
	printf("%u \n", 4294967296);

	printf("%f \n", 0.000123);
	printf("%f \n", 0.0001236);
	printf("%e \n", 0.000123);
	printf("%E \n", 0.0001236);
	printf("%g \n", 0.000123);
	printf("%G \n", 0.0000123456);
	printf("Rate of economic growth has been estimated by 5%% this year. \n");

	return 0;
}
