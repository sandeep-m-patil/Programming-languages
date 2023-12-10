
#include<stdio.h>

int selection_sort(int a[],int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
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

selection_sort(a,n);
printf("\nAfter sorting the elements are : ");
for(i=0;i<n;i++)printf("%d ",a[i]);

}
