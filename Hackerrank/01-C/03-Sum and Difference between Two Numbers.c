#include <stdio.h>


int main()
{
	int Num1,Num2;
    float f1,f2;

    scanf("%d %d",&Num1,&Num2);
    scanf("%f %f",&f1,&f2);

    printf("%d %d\n",Num1+Num2,Num1-Num2);
    printf("%0.1f %0.1f",f1+f2,f1-f2);
    
    return 0;
}