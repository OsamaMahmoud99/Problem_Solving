#include <stdio.h>

int main()
{
    unsigned int Num,i;
    scanf("%u",&Num);

    if(Num >= 1 && Num <=9)
    {
        if(Num == 1)
        {
            printf("one");
        }
        else if(Num == 2)
        {
            printf("two");
        }
        else if(Num == 3)
        {
            printf("three");
        }
        else if(Num == 4)
        {
            printf("four");
        }
        else if(Num == 5)
        {
            printf("five");
        }
        else if(Num == 6)
        {
            printf("six");
        }
        else if(Num == 7)
        {
            printf("seven");
        }
        else if(Num == 8)
        {
            printf("eight");
        }
        else if(Num == 9)
        {
            printf("nine");
        }
    }
    else 
    {
        printf("Greater than 9");
    }
    
    
}/*******************/