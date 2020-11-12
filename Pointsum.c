#include<stdio.h>
#define SIZE 5

void get_sum(int *sum, int arr[]){
	for(int i = 0; i < SIZE; i++)
		*sum += *(arr + i);
}


int main(){
	int arr[SIZE] = {2, 4, 6, 8, 10};
	int sum;

	get_sum(&sum, arr);

	printf("%d\n", sum);


	return 0;
}
