//keep taking numbe as input from user until user entes a number which is multiple pf 7//
#include<stdio.h>
int main()
{
    int n;
    do{ printf("enter a number");
    scanf("%d\n",&n);
    if(n % 7 == 0) //multiple of 7//
    { break ;
    }
}while(1);
printf("thank you");
 return 0;

    
}