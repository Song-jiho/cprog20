#include <stdio.h>
int main(){
	double light_speed = 300000;
	double distance = 149600000;
	
	int min = 0;
	int sec = 0;
	
	int time;

	time = distance / light_speed;
	
	min = time / 60.0;
	sec = time % 60;
	
	printf("빛의 속도는 %fkm/s \n", light_speed);
	printf("태양과 지구와의 거리 %fkm \n", distance);
	printf("도달 시간은 %d분 %d초\n", min, sec);
	
	return 0;

}
