#include<stdio.h>

int main(){

    //strlen function

    char s1[10];
    printf("Enter string s1 : ");
    scanf("%s",&s1);
    int c=0,i=0;
    while(s1[i]!=NULL){
        c++;
        i++;
    }
    printf("\n\nThe string s1 is : %s",s1);
    printf("\n\nThe length of string s1 is :  %d",c);


    //strcpy function

    char s2[0];
    int j=0,a=0;
    while(s1[j]!=NULL){
        s2[a++];
        s1[j]=s2[j];
        j++;
   }
   printf("\n\nThe copied string s2 is :  %s",s2);

   
   //strcmp function
   
   int k=0,flag=0;
   while(s1[k]!=NULL){
        if(s1[k]==s2[k]){
            flag=1;
        }

        k++;
   }
   if(flag){
        printf("\n\ns1 and s2 are same");
   }
   else{
        printf("\n\ns1 and s2 are different");
   }

   printf("\n\n\n");

}
