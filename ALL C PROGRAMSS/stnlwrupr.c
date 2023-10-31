#include<stdio.h>

int main(){

    //strupr and strlwr function
    int s;
    printf("Enter string length : ");
    scanf("%d",&s);


    char s3[s];
    printf("Enter string: ");
    scanf("%s",&s3);

   int n,i=0,d;
    while(s3[i]!=NULL){
        if(s3[i]>=97 && s3[i]<=122){
            s3[i]=s3[i]-32;
        }
        else if(s3[i]>=65 && s3[i]<=90){
                s3[i]=s3[i]+32;
        }

      i++;
    }
    printf("The string is changed as : %s",s3);
}
