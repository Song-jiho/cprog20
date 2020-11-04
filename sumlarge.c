#include <stdio.h>
#include <sys/time.h>

int main(){
	struct timeval t_start, t_end;
	long sum, i;
	//register long sum, i;
	time_t start, end;
	sum = 0;

	gettimeofday(&t_start, NULL);

	for(i = 0; i < 10000000; i++)
		sum += i;
	
	gettimeofday(&t_end, NULL);
	double r = (double)(end - start);

	printf("%f secs\n", (t_end.tv_sec - t_start.tv_sec + (t_end.tv_usec - t_start.tv_usec) / 1000000.0));
	printf("sum = %ld\n", sum);
	return 0;
}
