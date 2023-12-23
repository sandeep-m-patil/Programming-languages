#include<stdio.h>

int main(){

    FILE *fp1,*fp2;
    char c;
    fp1=fopen("SampleText1.txt","w");

    printf("Enter the characters and to stop type @: ");

   while((c=getchar())!='@')fputc(c,fp1);
   fclose(fp1);

    fp1=fopen("SampleText1.txt","r");


    fp2=fopen("SampleText2.txt","w");

    while((c=fgetc(fp1))!=EOF)fputc(c,fp2);

    fclose(fp2);


    fp2=fopen("SampleText2.txt","r");

    printf("\nThe copied file characters are : \n");
    while((c=fgetc(fp2))!=EOF)printf("%c",c);

    fclose(fp2);


    return 0;

}