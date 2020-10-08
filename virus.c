#include<stdio.h>
int main(){
	int n, t, i;

	printf("몇마리의 세균을 배양하시겠습니다? :");
	scanf("%d", &n);

	printf("몇시간을 기다리시겠습니까? :");
	scanf("%d", &t);

	for(i = 0; i <= t; i++){
		n *= 4;
	}

	printf("총 %d마리의 세균이 됬습니다.\n", n);
	return 0;
}
