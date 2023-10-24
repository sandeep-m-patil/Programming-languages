#include<stdio.h>
#include<math.h>

int power(long int a,long int b){

return pow(a,b);

}

long int main(){

int n,i,sum=0;

printf("Enter no of terms : ");
scanf("%ld",&n);

for(i=1;i<=n;i++){

    printf("%ld",power(10,i)-1);
    sum=sum+(power(10,i)-1);

    if(i!=n)printf("+");

}
printf("\nsum is the series : %ld",sum);


}