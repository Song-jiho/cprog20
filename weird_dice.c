#include<stdio.h>
#include<stdlib.h>
void weird_dice(){
	srand(time(NULL));

	int n, i;
	
	n = 1 + rand()%10;
	if(n <= 3) printf("1\n");
	else if(3 < n && n <= 6) printf("2\n");
	else if(n == 7) printf("3\n");
	else if(n == 8) printf("4\n");
	else if(n == 9) printf("5\n");
	else printf("6\n");

}
int main(){
	weird_dice();
	return 0;
}
