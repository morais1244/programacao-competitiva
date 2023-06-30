#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define max 100001

int main(){
	
	char mod[max],str[5][max];
	int x,n=-1,k,d=0,i,j,menor=1000;
	gets(mod);
	scanf("%d ",&k);
	for(i=0;i<5;i++)
		gets(str[i]);
	for(i=0;i<5;i++,d=0){
		for(j=0;j<strlen(mod);j++)
			if(str[i][j]!=mod[j])
				d++;
		if(d<menor && d<k){
			menor = d;
			n = i+1;
		}
	}
	printf("%d\n",n);
	if(n!=-1)
		printf("%d\n",menor);
	
}