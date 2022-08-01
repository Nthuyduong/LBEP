#include <stdio.h>
	int main(){
		for(int i=1;i<=5;i++){
			for(int j=1;j<=5;j++){
				if(j==5 && i%2==0){
					continue;
				}
				printf("*");
			}printf("\n");
		}
	}