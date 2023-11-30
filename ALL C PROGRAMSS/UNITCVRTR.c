#include<stdio.h>

void main(){
      float r;
      int a,b;
      float arr[3]={83.34,0.91,0.011};
      printf("Enter \n 1.Rupee \n 2.Dollar \n 3.Euro\n");
      printf("Enter the type of currency you want to enter: ");
      scanf("%d",&a);
      printf("Enter the amount: ");
      scanf("%f",&r);
      printf("Currency you want to convert: ");
      scanf("%d",&b);
      if(a==1 && b==2){
        printf("The %.2f currency in rupee to dollar is %.2f",r,r/arr[0]);
      }
      else if(a==2&&b==1){
        printf("The %.2f currency in dollar to rupee is %.2f",r,r*arr[0]);
      }
      else if(a==2&&b==3){
        printf("The %.2f currency in dollar to euro is %.2f",r,r*arr[1]);
      }
      else if(a==3&&b==2){

        printf("The %.2f currency in euro to dollar is %.2f",r,r/arr[1]);
      }
      else if(a==3&&b==1){
        printf("The %.2f currency in euro to rupee is %.2f",r,r*arr[2]);
      }
      else if(a==1&&b==3){
        printf("The %.2f currency in rupee to euro is %.2f",r,r/arr[2]);
      }
      else
      printf("Error");


    }
