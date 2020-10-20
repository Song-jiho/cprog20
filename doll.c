#include<stdio.h>

int num = 100;

int dec_item(int a){
	static int d = 0;
	num -= a;

	d++;
	printf("판매는 %d번 되었습니다.\n", d);
	return num;
}



int inc_item(int a){
	static int i = 0;
	num += a;

	i++;
	printf("입고는 %d번 되었습니다.\n", i);
	return num;
}



void print_item(){
	 printf("재고가 %d개 남았습니다.\n", num);
}


void print_stat(){
	printf("재고는  %d개  입니다\n", num);

}


int main(){
	while(1){
		int opt, n;
		printf("판매: 1, 입고: 2, 재고확인: 3,종료: 4, :");
		scanf("%d", &opt);

		if (opt < 3 && opt > 0){
			printf("수량을 입력하시오: ");
			scanf("%d", &n);
		}

		switch(opt){
		case 1:
			dec_item(n);
			break;
		case 2:
			inc_item(n);
			break;
		case 3:
			print_item();
			break;
		case 4:
			goto out;
		default:
			printf("잘못 선택함\n");
		}
	}
out:
	print_stat();
	return 0;
}
