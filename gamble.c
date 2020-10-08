#include<stdio.h>
#include<stdlib.h>

int main(){
	srand(time(NULL));
	
	int start, goal, i;
	int wins = 0;	

	printf("시작 금액을 입력하시오: ");
	scanf("%d", &start);
	
	printf("목표 금액은?: ");
	scanf("%d", &goal);

	for (i = 0; i < 100; i++){
		int cash = start;
		while(cash > 0 && cash < goal){
			if (((double)rand() / RAND_MAX) < 0.5)
				cash++;
			else
				cash--;
		}
		if (cash == goal)
			wins++;
	}
	
	printf("초기 금액 $%d \n", start);
	printf("목표 금액 $%d \n", goal);
	printf("100번 중에서 %d번 성공\n", wins);
	return 0;
	


}
