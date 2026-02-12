//to  check wehtere the number is prime or not//
#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n % 2 == 0)
    {
        printf("it is prime %d",n);

    }
    else{
        printf("it is not prime %d",n);

    }
    return 0;
}