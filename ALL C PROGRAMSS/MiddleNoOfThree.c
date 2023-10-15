#include<stdio.h>
 
int main(){
	
	int a,b,c,mid;
	
	printf("Enter a: ");
	scanf("%d",&a);
	
	printf("Enter b: ");
	scanf("%d",&b);
	
	printf("Enter c: ");
	scanf("%d",&c);
	
    if( ( a>b && b>c ) || ( c>b && b>a ) ) mid=b;
    
    else if(( a>c && c>b )||( b>c && c>a ))
    mid=c;
  
    else mid=a;
    
	
	printf("The middle is %d",mid);
}