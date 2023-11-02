#include<stdio.h>

int main()
{
    char text[]={'a','D','&','7'},c;
    int i;
    for(i=0;i<4;i++){
    printf("\n %c  - %d",text[i],text[i]);
    }
    printf("\nEnter char : ");
    scanf(" %c",&c);
    printf("\nASCII VALUE OF %c is %d\n",c,c);
    return 0;
}