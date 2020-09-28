#include<stdio.h>
int main(){
	int a, b;
	double x;	
	
	printf("분자를 입력하세요: ");
	scanf("%d", &a);
	printf("분모를 입력하세요: ");
	scanf("%d", &b);
	
	x = (double)a / b;

	printf("나눈값은 %f\n", x);
	
	return 0;
}
