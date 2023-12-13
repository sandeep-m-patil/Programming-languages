#include<stdio.h>

int main(){
	
	int n,i,sum=0;
    
    printf("n: ");
    scanf("%d",&n);
    i=1;
    loop:
    sum=sum+i;
   
    if(i==n)
    {printf("sum is %d",sum);
    return 0;} 
    i++;
    goto loop;

    return 0;
    
}