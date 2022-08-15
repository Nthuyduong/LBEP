#include<stdio.h>
#include<string.h>
int main(){
	int x;
	printf("Nhap chieu dai chuoi 1:\n");
	scanf("%d",&x);
	char s1[x];
	printf("Nhap chuoi thu nhat:\n");
	scanf("%s",s1);
	int y;
	printf("nhap chieu dai chuoi thu 2:\n");
	scanf("%d",&y);
	char s2[y];
	printf("Nhap chuoi thu hai:\n");
	scanf("%s",s2);
	
	
	if(strlen(s1)>strlen(s2)){//chuoi 1 dai hon chuoi 2 thi dao 2 chuoi
		char s3[100];
		strcpy(s3,s1);
		strcpy(s1,s2);
		strcpy(s2,s3);
	}
	bool  T = false;
	int i = 0;
		while ( s2[i] != 0){                     //khi nao s2 chua het thi con va
			if ( s2[i] == s1[0]) {
				int j = 0;
				while( s1[j] != 0 && s2[i] != 0 && s1[j] == s2[i]){
					i++;
					j++;
				}
				if( s1[j] == 0) {
					T = true;
					break;
				}
			} else { 
				i++;}
		}
   if (T) { 
   printf ("YES");
   } else { 
   	printf ("NO");
   }
  return 0;	
}