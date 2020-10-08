#include<stdio.h>
int main(){
	int n, i;
	printf("원하시는 구구단을 입력하세요( 짝수만 출력됩니다.): ");
	scanf("%d", &n);

	for(i = 1; i <= 9; i++){
		if ((i*n) % 2 == 0){
			printf("%d * %d = %d\n", n, i, n*i);
		}
		else{
			continue;
		}
	}
	return 0;

}
