#include <stdio.h>
#include <math.h>
	int main(){
		float a,b,c,S,P;

		printf("Nhap a =");
		scanf("%f",&a);

		printf("Nhap b =");
		scanf("%f",&b);

		printf("Nhap c =");
		scanf("%f",&c);

		if(a>0 && b>0 && c>0){
			if(a+b>c){
				if(b+c>a){
					S=sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b))/4;
					P=a+b+c;
					printf("Dien tich tam giac = %.2f",S);
					printf("Chu vi tam giac = %.2f",P);
				}
				else{
					printf("Khong phai tam giac");
				}
			}
			else{
				printf("Khong phai tam giac");
			}
		}
		else{
			printf("Khong phai tam giac");
		}
	}