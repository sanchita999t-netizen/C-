#include<stdio.h>

int even(int n){
    if(n %2 == 0)
    { return 1;}
    else{
        return 0;
    }
}
 int main()
 {
     int i, b;
     printf("enter a number ");
     scanf("%d",&b);
     for(i = 1;i<=b;i++){
        printf("%d\n",even(i));
     }
    }