#include <stdio.h>
	int main(){
		int a,b,c;

		printf("Nhap a =");
		scanf("%d",&a);

		printf("Nhap b =");
		scanf("%d",&b);

		printf("Nhap c =");
		scanf("%d",&c);

		if(a>b){
			if(a>c){
				printf("So lon nhat = %d",a);
			}
			else{
				printf("So lon nhat = %d",c);
			}
		}
		else{
			if(b>c){
				printf("So lon nhat =%d",b);
			}
			else{
				printf("Sp lon nhat =%d",c);
			}
		}

	}