//write a program to access radius of a circle and calculate the area of circle and the circumference of circle using function/
#include<stdio.h>
 float area(float r)
 {
     return(3.14*r);
 }
 float circumference(float r)
 {
    return(2*3.14*r);
 }
  int main()
  {
     float radius;
     printf("radius of circle ");
     scanf("%f",&radius);

     printf(" area of circle is %f\n",area(radius));
     printf("circumference of circle %f\n",circumference(radius));
     

      
  }