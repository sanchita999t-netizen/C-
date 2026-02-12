#include<stdio.h>
 int fact(int n)
 {
    int s;
    if(n==1 || n==0)
     return 1;
     else
      s = n*fact(n-1);
      return s;
    
 }
 int main()
 {
    int b;
    printf(" enter a number");
    scanf("%d",&b);
    printf(" factorial  = %d", fact(b));
 }