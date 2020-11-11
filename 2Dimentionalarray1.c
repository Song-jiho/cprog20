#include<stdio.h>
#define ROWS 3
#define COLS 5

int main(){
	
	int averages[COLS - 1];

	int a[ROWS][COLS] = {
	{87, 98, 80, 76, 3},
	{99, 89, 90, 90, 0},
	{65, 68, 50, 49, 0}
	};

	int i;
	for(i = 0; i < COLS; i++){
		double aver;		
		aver = (a[0][i] + a[1][i] + a[2][i]) / 3;
		averages[i] = aver;
	}
	for(int k = 0; k < COLS - 1; k++)
		printf("%d\n", averages[k]);
	return 0;
}
