#include <stdio.h>

int main(){

	int h;
	int w;
	double a;

	printf("높이를 입력하시오: ");
	scanf("%d", &h);

	printf("밑변을 입력하시오: ");
	scanf("%d", &w);


	a = (double)h * w  * 0.5;
	printf("넓이는 %lf \n", a);

	return 0;

}
