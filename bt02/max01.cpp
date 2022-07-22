#include <stdio.h>
	int main(){
		int a,b,c,max;

		printf("Nhap a =");
		scanf("%d",&a);

		printf("Nhap b =");
		scanf("%d",&b);

		printf("Nhap c =");
		scanf("%d",&c);

		max=a;

		if(b>a){
			max=b;
			if(b>c){
				printf("So lon nhat = %d",b);
			}
			else{
				printf("So lon nhat = %d",c);
			}
		}
		else{
			if(c>a){
				printf("So lon nhat = %d",c);
			}
			else{
				printf("So lon nhat = %d",a);
			}
		}
	}