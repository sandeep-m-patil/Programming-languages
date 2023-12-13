#include<stdio.h>

int insertion_sort(int a[],int n){
    int i,j,d;
    for(i=0;i<n;i++){
        j=i;
        d=a[i];
        while(j>=0 && a[j-1]>d){
            a[j]=a[j-1];
            j--;
        }
        a[j]=d;
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

insertion_sort(a,n);
printf("\nAfter sorting the elements are : ");
for(i=0;i<n;i++)printf("%d ",a[i]);

}
