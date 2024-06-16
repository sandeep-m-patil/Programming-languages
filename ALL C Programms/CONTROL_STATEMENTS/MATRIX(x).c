#include<stdio.h>
int main(){
    int r1,c1,r2,c2,i,j,k;
    printf("Enter no.of rows and cols for matrix A : ");
    scanf("%d %d",&r1,&c1);
    int a[r1][c1];
    printf("Enter elements for matrix A: ");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)scanf("%d",&a[i][j]);
    }
    printf("Enter no.of rows and cols for matrix B : ");
    scanf("%d %d",&r2,&c2);
    int b[r2][c2];
    printf("Enter elements for matrix B: ");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++)scanf("%d",&b[i][j]);
    }

    int c[c1][r2];
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)c[i][j]=0;
    }

    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<r2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("The Multiplication of matrices A and B ( A x B ) is \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
