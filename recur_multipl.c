#include<stdio.h>

int multiple(int n){
	if ( n == 10){
		printf("구구단 끝\n");
		return 0;
	}
	else{
		printf("3 X %d = %d\n",  n, 3*n);
		return multiple(n + 1);
	}
}



int main(){
	int a;
	printf("몇번째부터 입력하시겠습니까?: ");
	scanf("%d", &a);

	multiple(a);
	return 0;
}
