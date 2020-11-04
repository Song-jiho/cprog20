#include<stdio.h>

int multiple(int n){
	if ( n == 10){
		printf("구구단 끝\n");
		return 0;
	}
	else{
		printf("3 X %d = %d\n",  n, 3*n);
		return multiple(n + 1);
	}
}



int main(){
	multiple(1);
	return 0;
}
