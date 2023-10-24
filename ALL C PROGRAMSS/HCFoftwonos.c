#include<stdio.h>

int main(){
int a,b,r;

printf("Enter larger number : ");
scanf("%d",&a);


printf("Enter smaller number : ");
scanf("%d",&b);

while(a%b!=0){
    r=a%b;
    a=b;
    b=r;

}

printf("\nHCF of given no.s is %d\n",b);

}
