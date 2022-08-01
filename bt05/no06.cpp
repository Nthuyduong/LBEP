#include <stdio.h>
	int main(){
		//Nhap a,b. Tim uoc chung lon nhat va boi chung nho nhat
		int a,b;

		printf("Nhap a= ");
		scanf("%d",&a);

		printf("Nhap b= ");
		scanf("%d",&b);

		int uc,bc;
		for(uc=a;uc<=1;uc--){
			if(a%uc==0 && b%uc==0){
				printf("uoc chung lon nhat = %d",uc);
				break;
			}
		}printf("\n");
		for(bc=a;bc<=a*b;bc++){
			if(bc%a==0 && bc%b==0){
				printf("boi chung nho nhat = %d", bc);
				break;
			}
		}
	}