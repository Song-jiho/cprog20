#include<stdio.h>
#include<stdlib.h>

void get_random(){
	srand(time(NULL));
	int i;
	int n;

	for(i = 0; i <= 9; i++){
		n = rand()%100;
		printf("%d\n", n);
	}
	return 0;
}

int main(){
	get_random();
	return 0;
}
