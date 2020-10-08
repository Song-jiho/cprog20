#include<stdio.h>
#include<stdlib.h>

int main(){

	srand(time(NULL));

	int a = rand() % 100;
	int g;
	int t = 0;

	do	{
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &g);
		t++;
		if (g > a) 
			printf("제시한 정수가 높습니다.\n");
		if (g < a)
			printf("제시한 정수가 낮습니다.\n");
	} while(g != a);
	printf("축하합니다. 시도횟수는 %d번 입니다.\n", t);
	
	return 0;
}
