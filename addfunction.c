//add 2 variables by function(call by)//
#include<stdio.h>
 int  sum( int a, int b)
 {
     int  add = a + b ;
         return add;
 }
  int main()
  {
      int a , b;
      printf("enter a number");
      scanf("%d%d",&a,&b);

      // int add = sum(a,b)
      //printf("sum of variables is %d",add)//
      printf("sum of variables is %d",sum(a ,b) );

  }