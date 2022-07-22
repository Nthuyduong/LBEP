#include <stdio.h>
	int main(){
		int a,b,c,min;

		printf("Nhap a =");
		scanf("%d",&a);

		printf("Nhap b =");
		scanf("%d",&b);

		printf("Nhap c =");
		scanf("%d",&c);

		min=a;

		if(b<a){
			min=b;
			if(b<c){
				printf("So be nhat = %d",b);
			}
			else{
				printf("So be nhat = %d",c);
			}
		}
		else{
			if(c<a){
				printf("So be nhat = %d",c);
			}
			else{
				printf("So be nhat = %d",a);
			}
		}
	}