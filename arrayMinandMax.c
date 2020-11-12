#include<stdio.h>

void get_min_max(int *min, int *max, int arr[]){

	for(int i = 0; i < 5; i++){
		if(*max < *(arr + i)){
			*max = *(arr + i);
		}
		if(*min > *(arr + i)){
			*min = *(arr + i);
		}
	}
}


int main(){
	int arr[5] = {10, 2, 6, 8, 4};
	int max;
	int min = 100;

	get_min_max(&min, &max, arr);

	printf("min = %d  max = %d\n", min, max);

	return 0;
}
