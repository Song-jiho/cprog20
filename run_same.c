#include <stdio.h>
#define PI 3.141592
int main(){
	int x;
	int y;
	double r = (5 * 2) * PI;
	double t;

	printf("Type the speed\n");
	printf("Panda: ");
	scanf("%d", &x);

	printf("Horse: ");
	scanf("%d", &y);

	t = r / (x + y);
	
	printf("t = %f\n", t);

	return 0;
}
