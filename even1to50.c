///
#include<stdio.h>
int iseven(int n)
{
    if( n % 2 == 0)
    { return 1;}
    else
      { return 0 ;}
}
 int main(){
     
    int i ;
    for ( i=0 ;i<= 50 ; i++)
    {
        if(iseven(i)){
            printf("%d\n",i);
        }

    }
     return 0 ;
 }