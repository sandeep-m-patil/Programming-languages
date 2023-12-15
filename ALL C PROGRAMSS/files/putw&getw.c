#include<stdio.h>

int main(){

    FILE *fp;
    int d,s=0;
    fp=fopen("f1.txt","w+");
    printf("Enter the integers and to stop type -1 : ");

    while(1)
    {
        scanf("%d",&d);
        if(d==-1)break;
        putw(d,fp);
        s+=d;
    }

    putw(s,fp);

    rewind(fp);

    printf("\nThe file integers are : \n");
    while((d=getw(fp))!=EOF)printf("%d ",d);
    fclose(fp);
    return 0;

}