#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define max 1001

int main(){
	
	char str[max];
	char* c;
	int flag=0,i,q,soma=0,palavra,flag2=0,x;
	float med;
start:
	q=0;
	palavra=0;
	if(!gets(str))
		return 0;
	soma=0;
	c = strtok(str," ");
	while(c!=NULL){
		q++;
		for(i=0,flag2=0,x=0,flag=0;i<strlen(c);i++){
			if(toupper(c[i])>='A'&&toupper(c[i])<='Z')
				flag=1;
			if(c[i]>='0'&&c[i]<='9')
				flag2=1;
			if(c[i]=='.'&&i!=strlen(c)-1)
				flag2=1;
			else if(c[i]=='.'&&flag==1)
				x++;
		}
		i-=x;
		if(flag2==1||flag==0){
			i=0;
			q--;
		}
		soma+=i;
		c = strtok(NULL," ");
	}
	med=(float)soma/q;
//	printf("soma %d q %d med %f\n",soma,q,med);
	if(med<4||q==0)
		printf("250\n");
	else if(med>=4 && med<6)
		printf("500\n");
	else if(med>=6)
		printf("1000\n");
	goto start;
}