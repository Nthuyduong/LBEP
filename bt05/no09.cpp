#include <stdio.h>
	int main(){
		//Nhap n, tim cac uoc va  tinh tong
		int n;
		printf("Nhap n = ");
		scanf("%d", &n);

		int k,max=0;
		while(n>0){
			k=n%10;
			if(k>max){
				max=k;
			}
			n=n/10;
		}printf("Chu so max = %d",max);
	}