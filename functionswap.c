//swap two variables using function//
#include<stdio.h>
int swap(int a, int b)
{
    int temp;
    temp = a;
    a= b;
    b= temp;
  printf("after swap a =%d b =%d\n",a,b);
}
int main()
{
     int a =10, b = 20 ;
     printf("berfore swap a = %d b = %d",a,b);
     swap(a,b);
}