#include<stdio.h>

int main(){

int marks,i,n,a[50];

printf("Enter no of students : ");
scanf("%d",&n);

for(i=0;i<50;i++){

    a[i]=0;

}

for(i=0;i<n;i++){
        printf("\nEnter marks (1-100) : ");
        scanf("%d",&marks);
        if(marks >50 && marks<=100){
            a[marks-51]++;

        }
}




for(i=0;i<50;i++){

    printf("\n%d are obtained by %d no of students",i+51,a[i]);

}

return 0;
}
