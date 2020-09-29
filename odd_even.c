#include<stdio.h>
int main(){
	int x;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &x);
	
	((x % 2) == 1)? printf("홀수입니다.\n") : printf("짝수입니다.\n");

	return 0;
}
