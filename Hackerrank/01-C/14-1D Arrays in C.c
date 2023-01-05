#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int arr[n],sum=0;

    for(int i=0 ;i<n; i++)
    {
        scanf("%d ",&arr[i]);
    }   
    for(int i=0 ;i<n; i++)
    {
        sum +=arr[i];
    }

    printf("%d",sum);
    return 0;
}