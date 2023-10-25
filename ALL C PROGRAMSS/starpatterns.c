#include<stdio.h>

int main(){

char a;

printf("1 for\t|\t2 for\t|\t3 for\t|\t4 for\t|\t5 for\t|\t6 for\t|\t7 for \n");
printf(" *   \t|\t ***\t|\t  *\t|\t ***\t|\t  *  \t|\t*****\t|\t * \n");
printf(" **  \t|\t **\t|\t **\t|\t  **\t|\t *** \t|\t *** \t|\t***\n");
printf(" *** \t|\t *\t|\t***\t|\t   *\t|\t*****\t|\t  *  \t|\t * \n");

printf("\n\nEnter your choice : ");
scanf(" %c",&a);


if(a=='1'){
    int n,i,j;
    printf("\n");
    printf("\nNo.of steps: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

else if(a=='2'){
    int n,i,j;
    printf("\n");
    printf("\nNo.of steps: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<=n-1-i;j++){
            printf("*");
        }
    printf("\n");

    }

}

else if(a=='3'){
    int n,i,j;
    printf("\n");
    printf("\nNo.of steps: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<n-1-i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

}

else if(a=='4'){
    int n,i,j;
    printf("\n");
    printf("\nNo.of steps: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<i){
                printf(" ");
            }           
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}

else if(a=='5'){
 int n,i,j,N;

printf("\n");
  printf("Enter no of steps :  ");
  scanf("%d",&n);
  N=n*2-2;


printf("\n");
  for(i=0;i<n;i++){

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
else if(a=='6'){
    int n,i,j;
    printf("\n");
    printf("Enter no of steps :  ");
    scanf("%d",&n);
    printf("\n");
    n=n*2-1;
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j>=n-i || j<i){
                    printf(" ");
                }
                else{
                    printf("*");
                }

            }
            printf("\n");
    }

}

else if(a=='7'){
    int i,j,n,c;
    printf("Enter no . of steps (only odd): ");
    scanf("%d",&n);
    if(n%2==0)n++;
    for(i=0;i<n/2;i++){
        for(j=0;j<n;j++){
            if(j<((n/2)-i) || j>((n/2)+i) ){
                printf(" ");
            }
            else if(i==n/2)printf("*");
            else{
                printf("*");
            }


        }
        printf("\n");
    }

    for(i=0;i<n/2+1;i++){
        for(j=0;j<n;j++){
            if(j>=n-i || j<i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}

}
