#include<stdio.h>

int main(){

    FILE *fp;
    char c;
    fp=fopen("f1.txt","w+");
    printf("Enter the characters and to stop type @: ");

   while((c=getchar())!='@')fputc(c,fp);

    rewind(fp);

    printf("\nThe file characters are : \n");
    while((c=fgetc(fp))!=EOF)printf("%c",c);
    fclose(fp);
    return 0;

}
