#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen n =");
	scanf("%d",&n);

	int i=1, max=0;
	while(i<n){
		if(i%2==0&&i%3==0){
			if(i>max){
				max = i;
			}
		}
		i++;
	}
	printf("%d",max);
}