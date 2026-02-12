 //find sum of two variables using a function//
 #include<stdio.h>
  int add(int a ,int b)
  {
    int sum = a + b;
     return sum ;
  }

  int main()
  {
     int  a, b;

     
     printf("enter a number ");
     scanf("%d%d",&a,&b);
      int result = add(a,b);
      printf("%d",result);  

  }