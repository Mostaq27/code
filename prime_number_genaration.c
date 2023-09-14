#include<stdio.h>
    int main(){
    int a,b,count=0,i,j;

    printf("Enter the initial number\n");
    scanf("%d",&a);

    printf("Enter the ending number\n");
    scanf("%d",&b);

    for(i=a;i<=b;i++){
        for(j=2;j<=i-1;i++){
            if(i%j==0){
            count++;
            break;
            }
        if(count==0){
            printf("%d ",i);
          }
        }
        count=0;
    }
    return 0;
 }
