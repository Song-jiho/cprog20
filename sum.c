#include<stdio.h>

int main(){
	int x;
	int y;
	int sum;

	printf("Enter the first number: ");
	scanf("%d", &x);

	printf("Enter the second number: ");
	scanf("%d", &y);

	sum = x + y;
	printf("Sum : %d \n", sum);

	return 0;
}
