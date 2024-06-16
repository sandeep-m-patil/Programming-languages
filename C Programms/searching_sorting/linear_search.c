#include<stdio.h>

int linear_search(int a[],int n,int k){

for(int i=0;i<n;i++){
if(a[i]==k)return i;
}
}


int main(){
int n,i,k;
printf("Enter no.of elements in array : ");
scanf("%d",&n);
int a[n];
printf("\nEnter elements of the array : ");
for(i=0;i<n;i++)scanf("%d",&a[i]);
printf("\nEnter key : ");
scanf("%d",&k);

printf("\nThe key is found at %d",linear_search(a,n,k));

}
