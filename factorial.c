#include<stdio.h>
int factorial(int n){
	if(n <= 1) return 1;
	else return (n * factorial(n - 1));
}

int main(){
	int n;
	printf("숫자를 입력해주세요 : ");
	scanf("%d", &n);
	int r = factorial(n);	
	printf("%d\n", r);
	return 0;

}
