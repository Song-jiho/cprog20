#include<stdio.h>
int get_sum(int x,int  y){
	int sum;
	sum = x + y;

	return sum;
}

int get_diff(int x, int y){
	int diff;
	if (x < y){
		diff = y - x;
	}
	else{
		diff = x - y;	
	}
	
	return diff;
}

int get_mul(int x, int y){
	int multi;

	multi = x * y;

	return multi;
}

double get_div(int x, int y){
	double div;

	div = (double)x / y;

	return div;
}

int main(){
	int a, b;
	printf("Type two integers: ");
	scanf("%d %d", &a, &b);

	printf("sum = %d\n", get_sum(a, b));
	printf("diff = %d\n", get_diff(a, b)); //두 수의 차의 절대값이 나와야함
	printf("mul = %d\n", get_mul(a, b));
	printf("div = %f\n", get_div(a, b)); // a/b가 나와야 함(실수 형태로)

	return 0;
}
