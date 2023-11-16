#include<stdio.h>

int main()
{
    int p,q,r,s,i,j;
    printf("\tmat A x mat B calculator \n\n");
    printf("Enter no.of rows for mat A : ");
    scanf("%d",&p);
    printf("Enter no.of cols for mat A : ");
    scanf("%d",&q);
    printf("Enter no.of rows for mat B : ");
    scanf("%d",&r);
    printf("Enter no.of cols for mat B : ");
    scanf("%d",&s); 
 if(q==r){   
    int a[p][q],b[r][s];
    
    
    printf("\nEnter elements for mat A : ");
    for(i=0;i<p;i++){
     for(j=0;j<q;j++){
     
     scanf("%d",&a[i][j]);
    
     }
    
    }
    printf("\nEnter elements for mat B : ");
    for(i=0;i<r;i++){
     for(j=0;j<s;j++){
     
     scanf("%d",&b[i][j]);
    
     }
    
    }
    
    printf("\nElements for mat A : \n");
    for(i=0;i<p;i++){
     for(j=0;j<q;j++){
     
     printf("%d   ",a[i][j]);
    
     }
     printf("\n");
    
    }
    
    printf("\nElements for mat B : \n");
    for(i=0;i<r;i++){
     for(j=0;j<s;j++){
     
     printf("%d   ",b[i][j]);
    
     }
     printf("\n");
    
    }
    int c[p][r];
    for(i=0;i<p;i++){
     for(j=0;j<r;j++){
     
     c[i][j]=0;
    
     }
     
    
    }
    
    
    
    for(i=0;i<q;i++){
     for(j=0;j<s;j++){
     for(int k=0;k<r;k++){
     c[i][j]+=a[i][k]*b[k][j];
     
     }
     
    
     }
     
    
    }
    
    printf("\nElements of mat A x mat B : \n");
    for(i=0;i<p;i++){
     for(j=0;j<s;j++){
     
     printf("%d   ",c[i][j]);
    
     }
     printf("\n");
    
    }
    }
    
    else{
    printf("\n mat A x mat B  not possible \n");
    }
}