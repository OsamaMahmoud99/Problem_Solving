#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int Max=a;

    if(a>Max)
    {
        Max = a;
    }
    if(b>Max)
    {
        Max=b;
    }
    if(c>Max)
    {
        Max= c;
    }
    if(d>Max)
    {
        Max =d;
    }

    return Max;

}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}