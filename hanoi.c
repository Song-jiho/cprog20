#include<stdio.h>

int i = 0;

void hanoi_tower(int n, char from, char tmp, char to){

	if (n == 1){
		printf("원판 1을 %c에서 %c로 옮겨졌다.\n", from, to);
		i++;
	}
	else{
		hanoi_tower(n - 1, from, to, tmp);
		printf("원판 %d을 %c에서 %c로 옮겨졌다.\n", n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
		i++;
	}
}

int main(){
	int a;
	printf("원판의 개수는? :");
	scanf("%d", &a);

	hanoi_tower(a, 'A', 'B', 'C');
	printf("총 %d번 움직였습니다\n", i);
	return 0;
}
