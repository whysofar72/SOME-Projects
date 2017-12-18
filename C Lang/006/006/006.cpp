#include <stdio.h>
int main(void){
	int a, b, c;

	printf("type 1 decimal number : \n");
	scanf("%d", &a);
	printf("Decimal num : %d, Hexadecimal num : %x, Octal num : %o \n", a, a, a);
    printf(" \n");

	printf("type 1 hexadecimal number : \n");
	scanf("%x", &b);
	printf("Decimal num : %d, Hexadecimal num : %x, Octal num : %o \n", b, b, b);
    printf(" \n");

	printf("type 1 octal number : \n");
	scanf("%o", &c);
	printf("Decimal num : %d, Hexadecimal num : %x, Octal num : %o \n", c, c, c);
    printf(" \n");
	
	
	float f1, f2;
	double d1, d2;

	printf("type 2 float formatted real number : \n");
	scanf("%f %e", &f1, &f2);
	printf("print float formatted real num on the screen : f1=%f, f2=%e \n", f1, f2);
    printf(" \n");
	printf("type 2 double formatted real number : \n");
	scanf("%lf %le", &d1, &d2);
	printf("print double formatted real num on the screen : f1=%lf, f2=%le \n", d1, d2);
	printf(" \n");

	return 0;
}


