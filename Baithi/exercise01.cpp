#include <stdio.h>
#include <string.h>
int main (){
	int m,n;
	char s1[n],s2[m];

	printf("Enter s1 = ");
	scanf("%s",s1);

	printf("Enter s2 = ");
	scanf("%s",s2);

	printf("s1 = %s\n",s1);
	printf("s2 = %s\n",s2);

	if(n>m){
		if(strchr(s1,s2)>-1){
			printf("yes");
		}
		else{
			printf("No");
		}
	}else{
		if(strchr(s2,s1)>-1){
			printf("yes");
		}
		else{
			printf("No");
		}
	}
}