#include<stdio.h>

int main()
{
   //Pointer to Pointer 
   printf("\n Pointer to Pointer : \n");
   int z=64;
   int *p;
   p=&z;
   printf("\n&x=%u x=%u",&z,z); 
   printf("\n\np=%u *p=%u",p,*p);
   //printf("\nsize of p= ",sizeof(p)); 
   int **dp;
   dp=&p;
   printf("\n\ndp=%u *dp=%u",dp,*dp);
  
  int **tp;
  tp=&dp;
  printf("\n\ntp=%u *tp=%u\n",tp,*tp);
  
  //Pointer to Pointer example
  printf("\n Pointer to Pointer uexample :\n"); 
  int i=5,j=10;
  int *a,**da;
  a=&i;
  da=&a;
  a=&j;
  **da=*a+5;
  printf("\ni=%d     j=%d",i,j);
  printf("\n*a=%d *da=%d\n",*a,**da);
  
  //Pointer to Array 
  printf("\n Pointer to Array: \n");
  
  int arr[5]={3,5,2,7,1};
  //arr=arr+1;//error 
  int *x,*y;
  x=arr;//address of arr[0]
  y=&arr;//address of array arr
  
  printf("\narr=%u  &arr=%u\n",x,y);
  printf("\narr+1=%u  *arr+1=%u",x+1,*(x+1));
  printf("\narr+1=%u  *&arr+3=%u\n",y+1,*(y+3));
  
   
  //Addition of int to pointers
  printf("\n Addition of int to pointers: \n");
  
  int s=10;
  int *v;
  v=&s;
  printf("\nv = %d",v);
  printf("\nv+1 = %d ",v+1);
  
  
  
  
  
  
  
  
  
  printf("\n");

}