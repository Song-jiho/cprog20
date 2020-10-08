#include<stdio.h>
#include<math.h>
#define PI 3.141592

int get_height(int a, int d){
	int b;

	double radian = d * (PI / 180);

	b = sin(radian) * a;

	return b;
}

double get_height2(double a, double d){
	double c;

	double radian = d * (PI / 180);

	c = sin(radian) * a;

	return c;
}

int main(){

	int a;
	int b;

	printf("빗변의 길이를 적어주세요: ");
	scanf("%d", &a);

	printf("빗변과 밑변 사이의 각도를 적어주세요: ");
	scanf("%d", &b);

	printf("직각 삼각형의 높이는 %d입니다.\n", get_height(a, b));
	
	a = (double)a;
	b = (double)b;

	printf("더욱 세부적으로 나타내면 %lf입니다.\n", get_height2(a, b));



	return 0;
}
