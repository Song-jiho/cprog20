#include<stdio.h>
#include<sys/time.h>

int main(){
	unsigned int num;
	struct timeval t_start, t_end;
	int i, cnt, bin ;

	bin = 0;
	
	printf("Type Max_limit : ");
	scanf("%u", &num);
	
	unsigned int mask = 1 << 7; 
	((num & mask) == 0)? bin : bin++;
	mask = mask >> 1;
	((num & mask) == 0)? bin : bin++;
	mask = mask >> 1;
	((num & mask) == 0)? bin : bin++;
	mask = mask >> 1;
	((num & mask) == 0)? bin : bin++;
	mask = mask >> 1;
	((num & mask) == 0)? bin : bin++;
	mask = mask >> 1;
	((num & mask) == 0)? bin : bin++;
	mask = mask >> 1;
	((num & mask) == 0)? bin : bin++;
	mask = mask >> 1;
	((num & mask) == 0)? bin : bin++;

	//get start time
	gettimeofday(&t_start, NULL);

	i = 0;
	cnt = 0;

	while(i < num) {
		if ((i % 2) == 0)
			cnt++;
		i++;
	}
	printf("even numbers = %d\n", cnt);

	//get end time
	gettimeofday(&t_end, NULL);

	//print time duration
	printf("%f sces\n", (t_end.tv_sec - t_start.tv_sec + (t_end.tv_usec - t_start.tv_usec) / 1000000.0));

	printf("Number of binary number 1 : %d\n", bin);

	return 0;
}
