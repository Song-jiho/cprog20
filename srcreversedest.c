#include<stdio.h>

int main(){
	int src[10000] = {0};
	int dest[10000] = {0};
	int forw, rever, n, s;

	for(forw = 0; forw < 10000; forw++){
		src[forw] = forw;
	}
	
	for(rever = 10000; rever > 0; rever--){
		dest[rever] = src[10000 - rever];
	}	

	for(n = 0; n < 10; n++){
		printf("%d\n", src[n]);
	}

	printf("=================");

	for(s = 0; s < 10; s++){
		printf("%d\n", dest[s]);
	}	

	return 0;

}
