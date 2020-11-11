#include<stdio.h>
#define ROW 3
#define NUM 2
#define COL 4

int main(){
	int a[ROW][NUM] ={
	{0, 1},
	{1, 1},
	{1, 0}
	};
	
	int b[NUM][COL] = {
	{1, 1, 0, 1},
	{0, 1, 0, 0}
	};

	int c[ROW][COL] = {0};

	int i, j, k;
	for(i = 0; i < ROW; i++)
		for(j = 0; j < COL; j++)
			for(k = 0; k < NUM; k++)
				c[i][j] += a[i][k] * b[k][j];

	for(i = 0; i < ROW; i++){
		for(j = 0; j < COL; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}
	return 0;
}
