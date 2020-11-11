#include<stdio.h>
#define SIZE 16
int binary_search(int list[], int n, int key);

int main(){
	int key;
	int grade[SIZE] = {2, 6, 11, 13, 18, 20, 22, 27, 29, 30, 34, 38, 41, 42, 45, 47};
	printf("탐색할 값을 입력하시오: ");
	scanf("%d", &key);
	printf("탐색 결과 = %d\n", binary_search(grade, SIZE, key));

	return 0;
}

int binary_search(int list[], int n, int key){
	int first, middle, last;

	first = 0;
	last = n - 1;

	while(first <= last){
		printf("[%d %d]\n",list[first], list[last]);
		middle = (first + last) / 2;
		if(list[middle] == key){
			return middle;
		}
		else if(list[middle] > key){
			last = middle - 1;
		}
		else{
			first = middle + 1;
		}
	}
	printf("값이 없습니다");
	return -1;
} 
