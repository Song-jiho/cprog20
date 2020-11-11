#include<stdio.h>
#define ROW 5
#define COL 5
#define NUM 3
#define ARR 3

void bombarea(int a[ROW][COL], int i, int j){
	int k, z;

	for(k = i - 1; k < i + 2; k++){
		for(z = j - 1; z < j + 2; z++){
			if(k < 0 || k > 4 || z < 0 || z > 4)
				continue;
			
			a[k][z] = 0;
		}
	}
}



int main(){
	int area[ROW][COL] = {
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1},
	{1, 1, 1, 1, 1}
	}; 
	
	bombarea(area, 1, 1);
	bombarea(area, 0, 4);
	bombarea(area, 2, 3);

	int sum = 0;

	for(int i = 0; i < ROW; i++){
		for(int j = 0; j < COL; j++){
			if(area[i][j] == 1)
				sum += 1;
			printf("%d ",area[i][j]);
		}
		printf("\n");
	}
	printf("남은 구역은 총 %d개남았습니다. \n", sum);
	return 0;
}
