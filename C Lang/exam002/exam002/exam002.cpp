#include <stdio.h>

int main(){
	int a=1,b=1,c=1;
	for(a; a<20; a+=1){
		printf("2 x %d = %d \n", a, 2*a);
	}
	printf("\n");
	for(a=1; a<20; a+=1){
		printf("3 x %d = %d \n", a, 3*a);
	}
	printf("\n");
	for(a=1; a<20; a+=1){
		printf("4 x %d = %d \n", a, 4*a);
	}
	printf("\n");
	for(a=1; a<20; a+=1){
	    printf("5 x %d = %d \n", a, 5*a);
	}
	printf("\n");
	for(a=1; a<20; a+=1){
		printf("6 x %d = %d \n", a, 6*a);
	}
	printf("\n");
	for(a=1; a<20; a+=1){
		printf("7 x %d = %d \n", a, 7*a);
	}
	printf("\n");
	for(a=1; a<20; a+=1){
		printf("8 x %d = %d \n", a, 8*a);
	}
	printf("\n");
	for(a=1; a<20; a+=1){
		printf("9 x %d = %d \n", a, 9*a);
	}

	printf("\n\n");
	for(a=1,b=1,c=1; a<10 && b<20 && c<30; a+=1,b+=1,c+=1){
		printf("%d x %d x %d = %d \n", a, b, c, a*b*c);
	}

	printf("\n\n");
	for(a=1,b=1,c=1; a<=10,b<=20,c<=30; a+=1,b+=1,c+=1){
		if(a>10){ //a�� 10�� �ʰ����� ���
			a-=3; //a�� �ٽ� ���ҽ�Ų��
		}
		if(b>20){ //b�� 20�� �ʰ����� ���
			b-=3; //b�� �ٽ� ���ҽ�Ų��
		}
		printf("%d x %d x %d = %d \n", a,b,c, a*b*c);
	}
	return 0;
}