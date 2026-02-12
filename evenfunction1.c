// write a function  iseven(int n) that returns 1 if the number
// is even and otherwise. use this in  main () to   print all even numbers between 1 and 50//
#include<stdio.h>
  int iseven( int n)
  {
     if ( n % 2 == 0)
      {return 1 ;}
      else 
       {return 0 ;}
  }

  int main()
  {
    int i;
    printf(" even number between  1 and 50 are :\n");
       for( i= 1 ; i<= 50 ; i++)
    {
      if( iseven(i))
      printf("%d",i);
    }
     return 0;
  }
  