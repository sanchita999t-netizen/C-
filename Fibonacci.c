#include<stdio.h>
int main()
{
    int n,i =1;
    int a = 0,b = 1 ,  next ;
    printf("enter a number");
    scanf("%d",&n);
    while(i<= n)
    {
        printf("%d\n",a);
        next =a+b;
         a = b  ;
         b =  next;

  

        i++;
    
    }
    return 0;

}
 
