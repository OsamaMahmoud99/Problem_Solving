#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int start = 0;
    int size  = n * 2 - 1;
    int end   = size - 1;
    int arr[size][size];  
  	
      while(n!=0)
      {
        for(int i=start ; i<=end ; ++i)
        {
           for(int j=start ; j<=end ; ++j)
            {
              if(i == start || j == start || i == end || j == end)
              {
                  arr[i][j] = n;
              }
              
            }
        }
        start++;
        end--;
        n--;
      }

      for(int i=0 ; i<size;i++)
      {
          for(int j=0; j<size ;j++)
          {
              printf("%d ",arr[i][j]);
          }
          printf("\n");
      }
    return 0;
}