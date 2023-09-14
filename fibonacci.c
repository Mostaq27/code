#include<stdio.h>
    int main(){
    int first=0,second=1,feb=0,n;
    printf("Enter the number\n");
    scanf("%d",&n);

    printf("%d %d",first,second);
    for(int i=1;i<= n;i++){

        feb=first + second;
        printf(" %d",feb);

        first = second;
        second = feb;
    }
}
