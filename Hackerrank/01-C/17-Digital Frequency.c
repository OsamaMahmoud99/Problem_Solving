#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char*str=malloc(100*sizeof(char));
    int i=0;
    int arr[10]={0};
    
    
    scanf("%[^\n]",str);    
  
    
    while(str[i] != '\0')
    {
        for(int j=0; j<=9; j++)
        {
            if( j == (str[i]-48))
            {
                arr[j]++;
                break;
            }
        }
        i++;
    }
    
    for(int j=0; j<=9; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}
