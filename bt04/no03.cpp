#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen n =");
	scanf("%d",&n);

	int i=1;
	while(i<n){
		if(n%i==0){;
		printf("%d\n",i);
		}
		i++;
	}
}