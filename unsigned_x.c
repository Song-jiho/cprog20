#include<stdio.h>

unsigned int x = 10;
int n = 0;

void print_binary(int a){
	if(a > 0){
		print_binary(a/2);
		printf("%d", a % 2);

		if(a % 2 == 1){
			n++;
		}
	}
}
int main(){
	printf("Unsigned int x = %d\n", x);

	print_binary(x);
	printf("\n");

	printf("1은 %d개다. \n", n);	

	return 0;
}
