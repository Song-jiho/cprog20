#include<stdio.h>

int main(){
	int a, b;
	
	printf("원하는 구구단을 입력하세요: ");
	scanf("%d", &a);

	for(b = 1; b <= 9; b++){
		printf("%d * %d = %d\n", a, b, a * b);
	}

	return 0;
}
