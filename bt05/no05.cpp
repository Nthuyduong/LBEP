#include <stdio.h>
	int main(){
		//Nhap n, tim cac uoc va  tinh tong
		int n;
		printf("Nhap n = ");
		scanf("%d", &n);

		int i,s=0;
		for(i=0;i<=n;i++){
			if(n%i==0){
				printf("%d\n",i);
				s+=i;
			}
		}printf("Tong cac uoc = %d",s);
	}