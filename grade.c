#include <stdio.h>
int main(){
	int num;
	double a;
	double b;
	double c;
	
	printf("Number of students:");
	scanf("%d", &num);

	a = num * 0.2;

	b = num * 0.8;
	b -= a;

	c = num - (a + b);

	printf("A학생 최대 인원수: %lf명\n", a);
	printf("B학생 최대 인원수: %lf명\n", b);
	printf("C학생 최대 인원수: %lf명\n", c);

	return 0;

}
