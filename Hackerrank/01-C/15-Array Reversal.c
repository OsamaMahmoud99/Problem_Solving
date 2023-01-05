#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int first = 0 , last = num - 1, temp;
    while(last > first)
    {
        temp       = arr[last];
        arr[last]  = arr[first];
        arr[first] = temp;

        last--;
        first++;

    }
    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}