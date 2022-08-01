#include <stdio.h>
	int main(){
		for(int i=1;i<=5;i++){
			for(int j=0;j<i;j++){
				//so nhom sao
				for(int k=0;k<i;k++){
					//so sao trong mot nhom
					printf("*");
				}printf(" ");
			}printf("\n");
		}
	}