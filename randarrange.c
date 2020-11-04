#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int again(int s[SIZE]){
	int i;
	int k;
	for(i = 0; i < SIZE; i++){
		for(k = i + 1; k < SIZE; k++){
			if(s[i] == s[k]){
				printf("틀린답 입니다.\n");
				return 0;
			}
		}
	}
	printf("정답 입니다\n");
	return 0;
}

int main(){
	int i;
	int scores[SIZE];
	srand(time(NULL));	

	for(i = 0; i < SIZE; i++){
		scores[i] = (rand() % 100) + 1;
	}
	for(i = 0; i < SIZE; i++){
		printf("score[%d] = %d\n", i, scores[i]);
	}
	
	again(scores);


	return 0;
}
