#include <stdio.h>

int main() {
  int x,y,flag;
  
  printf("Enter starting no: ");
  scanf("%d",&x);
  
  printf("Enter ending no: ");
  scanf("%d",&y);

  while(x<=y){
    
     flag = 1; 
  
    for (int i = 2; i <= x / 2; i++) { 
        if (x % i == 0) { 
            flag = 0; 
            break; 
        } 
    } 
 
    if (flag) { 
        printf("%d ", x); 
    } 
     x++;
   
  
 }
}