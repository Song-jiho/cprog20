#include<stdio.h>
#include<math.h>

int main(){
	double a, b, c, dis;

	printf("계수 a를 입력하시오: ");
	scanf("%lf", &a);
	
	printf("계수 b를 입력하시오: ");
	scanf("%lf", &b);
	
	printf("계수 c를 입력하시오: ");
	scanf("%lf", &c);

	dis = (b * b - 4.0 * a * c);

	if(a == 0 & b == 0)
		goto nothing;
	else if(a == 0)
		goto one;
	else if(dis >= 0)
		goto normal;
	else
		goto no;

	nothing:
		printf("상수만 존재해 해가 없습니다.\n");
		goto end;

	one:
		printf("방정식의 근은 %f입니다.\n", -c/b);
		goto end;

	normal:
		printf("방정식의 근은 %f입니다. \n", (-b + sqrt(dis)) / (2.0 * a));
		printf("방정식의 근은 %f입니다. \n", (-b - sqrt(dis)) / (2.0 * a));
		goto end;

	no:
		printf("실근이 존재하지 않습니다.\n");
		goto end;

	end:
		return 0;
}
