/* ex4.c */
#include <stdio.h>
int main(){
	double r;
	double pi = 3.14;

	printf("Enter radius value of the desired circle : ");
	scanf_s("%lf", &r);

	printf("\n");

	printf("The Area of the circle is %lf. \n", r*r*pi);

	return 0;
}