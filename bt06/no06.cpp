#include <stdio.h>
int main(){
	//Nhap mang n so nguyen, tim so luong so duong lien tiep nhieu nhat	
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d",&n);

	int i,a[n];
	for(i=0;i<n;i++){
		printf("nhap gia tri %d = \n",i);
		scanf("%d",&a[i]);
	}
	
	int c=0,max=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			c++;
			if(c>max){
				max=c;
			}
		}
		else{
			c=0;
		}

	}printf("so luong so duong lien tiep nhieu nhat = %d",max);
}	