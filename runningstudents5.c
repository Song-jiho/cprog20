#include<stdio.h>
#define NUMBERS 5

void select_sort(double list[]){
	int i, j, least;
	double temp;

	for(i = 0; i < NUMBERS - 1; i++){
		least = i;
		for(j = i + 1; j < NUMBERS; j++){
			if(list[j] < list[least]){
				least = j;
			}
		}
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
}

int main(){
	double students[NUMBERS];
	for(int i = 0; i < NUMBERS; i++){
		printf("학생 %d :", i+1);
		scanf("%lf", &students[i]);
	}
	printf("=========================\n");

	select_sort(students);

	for(int j = 0; j < NUMBERS; j++){
		printf("%d등: %f\n", j+1, students[j]);
	}
	
	return 0;
}
