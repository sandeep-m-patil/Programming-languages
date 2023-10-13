
#include<stdio.h>

int main(){
	
	long int f0=0,f1=1,fs,i,n;
	
	printf("Enter n: ");
	scanf("%ld",&n);
	
	fs=f0+f1;
    if(n<0)printf("wrong input");
	if(n>=1)printf("0,");
	if(n>=2)printf("1");
		
		for(i=3;i<=n;i++){
		fs=f0+f1;
		printf(",%ld",fs);
		f0=f1;
		f1=fs;
		
	}
	
}

