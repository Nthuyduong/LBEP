#include <stdio.h>
#include <math.h>
	int main(){
		float a,b,c,delta,x,x1,x2;

		printf("Nhap a =");
		scanf("%f",&a);

		printf("Nhap b =");
		scanf("%f",&b);

		printf("Nhap c =");
		scanf("%f",&c);

		if(a==0){
			x=-c/b;
			printf("Phuong trinh co mot nghiem duy nhat = %.2f",x);
		}
		else{
			delta=(b*b)-(4*a*c);
			if(delta==0){
				x1=x2=-b/2*a;
				printf("Phuong trinh co mot nghiem kep %.2f",x1);
			}
			else{
				if(delta>0){
					x1=(-b+sqrt(delta))/(2*a);
					x2=(-b-sqrt(delta))/(2*a);
					printf("Phuong trinh co hai nghiem phan biet = %.2f %.2f",x1,x2);
				}
				else{
					printf("Phuong trinh vo nghiem");
				}
			}
		}

	}