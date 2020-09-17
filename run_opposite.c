#include <stdio.h>
#define PI 3.14

int main(){
	int p;
	int h;
	double r = 5 * 2 * PI;
	double t;
	
	printf("Type the speed\n");
	printf("Pande: ");
	scanf("%d", &p);
	
	printf("Horse: ");
	scanf("%d", &h);

	t = r / (h - p);
	printf("t = %f\n", t);
}
