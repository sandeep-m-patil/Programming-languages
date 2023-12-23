#include<stdio.h>

int main(){

int n,i,k,sum=0,c=0;
printf("Enter any number : ");
scanf("%d",&n);

k=n;

for(i=2;i<k;i++){
    if(n%i==0){
        sum+=i+(n/i);
        k=n/i;
        c++;
    }
}

if(sum+1==n){
    printf("\n%d is perfect number and no of iteration are : %d\n",n,c);
}
else{
     printf("\n%d is not a perfect number and no of iteration are : %d\n ",n,c);
}

}
