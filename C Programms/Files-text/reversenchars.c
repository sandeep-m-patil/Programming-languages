#include<stdio.h>

int main(){
    FILE *fp;
    int n;
    char c;
    fp=fopen("f1.txt","r");
    printf("Enter no.of chars to be reveresed n: ");
    scanf("%d",&n);
    fseek(fp,n,0);
    printf("\nFile content is : ");
    do{
        c=fgetc(fp);
        printf("%c",c);
    }while((fseek(fp,-2,1))!=-1);


    fclose(fp);
}
