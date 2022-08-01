#include <stdio.h>
#include <math.h> //thư viện toán hoc
	int main(){
		int a,b,c;

		printf("Nhap a =");
		scanf("%d",&a);

		printf("Nhap b =");
		scanf("%d",&b);

		printf("Nhap c =");
		scanf("%d",&c);

		if(a==0){
			if(b==0){
				if(c==0){
					printf("Phuong trinh vo so nghiem;");
				}
				else{
					printf("Phương trinh vo nghiem");
				}
			}
			else{
				float x=-(float)c/b; //ép kiểu dữ 
				printf("Phuong trinh co mot nghiem duy nhat = %f",x);
			}
		}
		else{
			float delta=(b*b)-(4*a*c);
			if(delta==0){
				float x1=-(float)b/2*a;
				printf("Phuong trinh co mot nghiem kep %f",x1);
			}
			else{
				if(delta>0){
					float x1=(-b+sqrt(delta))/(2*a);
					float x2=(-b-sqrt(delta))/(2*a);
					printf("Phuong trinh co hai nghiem phan biet = %f %f",x1,x2);
				}
				else{
					printf("Phuong trinh vo nghiem");
				}
			}
		}

	}