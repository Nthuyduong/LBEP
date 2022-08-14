#include <stdio.h>
int main(){
	int d;
	printf("Nhap so ngay = \n");
	scanf("%d",&d);

	int m;
	printf("Nhap so thang = \n");
	scanf("%d",&m);

	int dom;
	switch(m){
		case 1: dom=d;
			break;
		case 2: dom=d+31;
			break;
		case 3: dom=d+31+28;
			break;
		case 4: dom=d+31+28+31;
			break;
		case 5: dom=d+31+28+31+30;
			break;
		case 6: dom=d+31+28+31+30+31;
			break;
		case 7: dom=d+31+28+31+30+31+30;
			break;
		case 8: dom=d+31+28+31+30+31+30+31;
			break;
		case 9: dom=d+31+28+31+30+31+30+31+31;
			break;
		case 10: dom=d+31+28+31+30+31+30+31+31+30;
			break;
		case 11: dom=d+31+28+31+30+31+30+31+31+30+31;
			break;
		case 12: dom=d+31+28+31+30+31+30+31+31+30+31+30;
			break;
	}
	printf("Ngay thu %d trong nam",dom);

	int t=dom%7;
	switch(t){
		case 1:
			printf("Do la thu hai");
			break;
		case 2:
			printf("Do la thu ba");
			break;
		case 3:
			printf("Do la thu tu");
			break;
		case 4:
			printf("Do la thu nam");
			break;
		case 5:
			printf("Do la thu sau");
			break;
		case 6:
			printf("Do la thu bay");
			break;
		case 0:
			printf("Do la chu nhat");
			break;
	}
}