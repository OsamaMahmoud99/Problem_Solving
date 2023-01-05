#include <stdio.h>

int main() {
	
    int Num,Sum=0,Last_digit;
    scanf("%d", &Num);
    
    while(Num > 0)
    {
        Last_digit = Num % 10;
        Sum       += Last_digit;
        Num       /= 10; 
    }
    printf("%d",Sum);
    return 0;
}