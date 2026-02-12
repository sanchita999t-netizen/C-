#include<stdio.h>
int main()
{
    char day;
    printf("enter a day (1-7):");
    scanf("%s",&day);

    switch(day){
        case'm':printf("monday\n");
        break;
        case't':printf("tuesday\n");
         break;
         case'w':printf("wednesday\n");
         break;
         case'h':printf("thursday\n");
        break;
        case'i':printf("friday\n");
         break;
         case'j':printf("saturday\n");
         break;
         default: printf("sunday\n");
         

    




    
} 
return 0;
}