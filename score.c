#include<stdio.h>
int main(){
	int mid, fin, a;
	double sum;

	printf("중간 기말 과제점수를 입력하시오.\n");
	scanf("%d %d %d", &mid, &fin, &a);
	
	printf("%d\n", mid);
	printf("%d\n", fin);
	printf("%d\n", a);

	sum = (double)mid * 0.5 + (double)fin * 3 / 7 + (double)a * 4 / 5;

	printf("변환 점수는 %f입니다.\n", sum);

	return 0;

}
