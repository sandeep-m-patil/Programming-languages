#include<stdio.h>

int binary_search(int a[],int n,int k){
int l=0,h=n-1,m;
for(int i=0;i<n;i++){
m=(l+h)/2;
if(a[m]==k)return m;
else if(k>a[m])l=m+1;
else if(k<a[m])h=m-1;
else return -1;
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
int t=binary_search(a,n,k);
if(t==-1)printf("key not found");
else printf("\nThe key is found at %d",t);

}
