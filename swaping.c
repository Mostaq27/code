#include<stdio.h>
int main()
{
    int a=5,b=9;
    //int t=a;
      //  a=b;
      //  b=t;
      a=a*b;
      b=a/b;
      a=a/b;
    printf("a=%d b=%d",a,b);
}
