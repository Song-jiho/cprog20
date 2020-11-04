#include<stdio.h>
#define SIZE 10

void overten(int s[SIZE]){
	int i;
	int k;

	for(i = 0; i < SIZE; i++){
		for(k = i + 1; k < SIZE; k++){
			if((s[i] + s[k]) >= 10){
				printf("arr[%d] = %d, arr[%d] = %d\n", i, s[i], k, s[k]);
			}
		}
	}
}


int main(){
	int arr[SIZE] = {3, 8, 1, 1, 2, 5, 2, 4, 3, 6};

	overten(arr);

	return 0;



}
