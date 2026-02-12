//write a recursive function to calculate n thn fibonical number//
 #include<stdio.h>
  int  fib(int n){
     if(n==0)
     { return 0;}
     else if(n==1){
        return 1;

     }
     else{
        return fib(n-1)+fib(n-2);
     }

    }

    


  int main(){
     int s;
     printf(" enter a number ");
     scanf("%d",&s);
      
     if(s<0)
     {printf("fibo.... of index is not defned");
    }
    else{
        printf("%d fibo.... number is %d",s,fib(s));
    }
  }