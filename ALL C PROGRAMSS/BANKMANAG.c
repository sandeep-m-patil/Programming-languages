#include<stdio.h>
 int n=1;
int main(){

char accname[100][200];
int accno[100];
int accamt[100];
    int ch;

 printf("\nEnter 1 for creating new account ");
    printf("\nEnter 2 for check balance");
    printf("\nEnter 3 for crediting amount");
    printf("\nEnter 4 for debiting amount");
    printf("\nEnter 5 for account info");
    printf("\nEnter 6 for accounts table");

     int i=0,f=1;
     while(f!=0){

              printf("\n\nEnter your choice : ");
    scanf("%d",&ch);
         if(ch==1){

        printf("\nEnter name: ");
        scanf("%s",&accname[i]);
        accno[i]=1;
        accamt[i]=1000;
        printf("account no: %d has account amount = %d",i,accamt[i]);
        printf("\tand account holder name =%s",accname[i]);


        i++;



    }
    else if(ch==2){
            int id;
            printf("\nEnter account no : ");
            scanf("%d",&id);
            printf("\naccount no: %d has account amount =%d",id,accamt[id]);


    }
    else if(ch==3){
        int amt,id;
            printf("\nEnter account no : ");
            scanf("%d",&id);
        printf("\nEnter an amount to be credited : ");
        scanf("%d",&amt);
        accamt[id]+=amt;




    }
else if(ch==4){
        int amt,id;
            printf("\nEnter account no : ");
            scanf("%d",&id);
        printf("\nEnter an amount to be debited : ");
        scanf("%d",&amt);
        accamt[id]-=amt;



    }
    else if(ch==5){
            int id;
            printf("\nEnter account no : ");
            scanf("%d",&id);

         printf("account no: %d has account amount = %d",id,accamt[id]);
        printf("\tand account holder name =%s",accname[id]);


    }
    else if(ch==6){
            printf("accounts table is as : ");
        for(int j=0;j<i;j++){
            printf("\naccount no %d has account amount %d and account name is %s",j,accamt[j],accname[j]);

        }

    }

    else{
        f=0;
    }

     }


}
