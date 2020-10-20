#include<stdio.h>

int increase_rabbit(int n){

	if (n <= 2){
		return 1;
	}

	else{
		return increase_rabbit(n - 1) + increase_rabbit(n - 2);
	}
}



int main(){
	int a;

	printf("몇 달을 기다릴테냐: ");
	scanf("%d", &a);
	
	printf("%d 쌍이다.\n", increase_rabbit(a+1));

	return 0;




}
