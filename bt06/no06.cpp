//tim so luong so duong lien tiep nhieu nhat
#include <stdio.h>
int main(){
	int n;
	printf("Nhap gia tri cua n = ");
	scanf("%d",&n);

	int i, a[n];
	for(i=0;i<n;i++){
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
	}
	if(max>0){
		printf("So luong cac so duong lien tiep nhieu nhat = %d",max);
	}
	else{
		printf("Day khong co so duong");
	}
}