#include <stdio.h>

int main(){

unsigned int y;

printf("Enter year : ");
scanf("%u",&y );

if(y%400==0 || (y%4==0 && y%100!=0)){
printf("\n%u is leap year ",y);
}
else{
printf("\n%u is not leap year ",y);
}

}