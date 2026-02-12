#include<stdio.h>
 
int swap(int x, int y){
    int temp;
    temp = x;
    x= y;
    y= temp;
    printf(" after swapping x= %d y= %d \n", x,y);


}

int main()
{
    int x, y;
    printf("enter values of x and y ");
    scanf("%d%d",&x,&y);

    printf("  before swapping\n");
    printf("x = %d y= %d\n",x,y);
    
    printf("in function\n");
    printf("x = %d y =%d", x,y);
    
    swap(x,y);

    return 0;
}