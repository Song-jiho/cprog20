#include<stdio.h>
void get_prime(int x){
	int i, n;

	for (i = 1; i <= x; i++){
		for (n = 2; n <= i; n++){
			if (i % n == 0)	break;
		}
		if (n == i) printf("%d\n", i);
	}
}

int main(){
	int n;
	printf("어디까지의 소수를 구하고 싶나요? : ");
	scanf("%d", &n);

	get_prime(n);
	return 0;
}
