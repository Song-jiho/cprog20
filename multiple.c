#include<stdio.h>

int main(){
	int n;
	int i = 1;

	printf("출력하고 싶은 단을 입력하세요: ");
	scanf("%d", &n);

	while(i <= 9){
		printf("%d * %d = %d \n", n, i, n * i);
		i++;

	}

	return 0;
}
