#include<stdio.h>
#define NUMBERS 5

int get_min(int arr[], int n);
int get_max(int arr[], int n);


int main(){
	int numbers[NUMBERS] = {1, 2, 3, 4, 5};
	int max, min;
	
	max = get_max(numbers, NUMBERS);
	min = get_min(numbers, NUMBERS);

	printf("가장 큰 숫자는 %d입니다.\n", max);
	printf("가장 작은 숫자는 %d입니다. \n", min);

	return 0;
}

int get_max(int arr[], int n){
	int i;
	int max = 0;

	for(i = 0; i < n; i++){
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}
	
int get_min(int arr[], int n){
	int i;
	int min = 100;

	for(i = 0; i < n; i++){
		if (arr[i] < min)
			min = arr[i];
	}
	
	return min;
}
