// sum of two variables using function 

#include<stdio.h>

int add(int a, int b, int c ,int d){
  int sum = a + b + c + d;
  return sum;
}

int main()
{
    int x, y,c,d;
 printf("enter the values of a b c d");
 scanf("%d%d%d%d",&x,&y,&c,&d);
 
 int result = add( x , y, c,d);
 printf(" result is %d\n",result);



}