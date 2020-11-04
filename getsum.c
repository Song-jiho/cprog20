#include<stdio.h>

void get_sum(int a[], int n){
	int b[n];
	
	for(int i = 0; i < n; i++){
		if((i) <= 0){
			i = 0;
		}
		b[i] = a[i] + a[i - 1];
	}
	
	for(int k = 0; k < n; k++){
		a[k] = b[k];
	}	
}



int main(){
	int arr[10];

	for(int i = 0; i < 10; i++)
		arr[i] = i;

	get_sum(arr, 10);

	for(int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);

}
