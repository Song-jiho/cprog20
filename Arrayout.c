#include<stdio.h>

int main(){
	int arr[5] = {2, 4, 6, 8, 10};

	for(int i = 0; i < 5; i++)
		printf("%d ", *(arr + i));
	
	printf("\n");	


	return 0;
}
