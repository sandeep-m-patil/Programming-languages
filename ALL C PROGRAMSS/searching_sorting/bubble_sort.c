#include<stdio.h>

int bubble_sort(int a[],int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){
        if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
        }
    }
    
    }

}


int main(){

int n,i,k;
printf("Enter no.of elements in array : ");
scanf("%d",&n);
int a[n];
printf("\nEnter elements of the array : ");
for(i=0;i<n;i++)scanf("%d",&a[i]);

printf("\nBefore sorting the elements are : ");
for(i=0;i<n;i++)printf("%d ",a[i]);

bubble_sort(a,n);
printf("\nAfter sorting the elements are : ");
for(i=0;i<n;i++)printf("%d ",a[i]);

}
