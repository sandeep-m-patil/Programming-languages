//pyramid in horizontal orientation successfully

#include <stdio.h>

int main(void) {
 int n,i,j,N;
  printf("Enter no of steps :  ");
  scanf("%d",&n);
  N=n*2-2;


  for(i=0;i<n;i++){
    printf("%d\t",i+1);
    for(j=0;j<=N;j++){

      if(j<((N/2)-i) || j>((N/2)+i) ){
        printf(" ");

      }
      else{
        printf("*");
      }
    }
    printf("\n");
  }

}