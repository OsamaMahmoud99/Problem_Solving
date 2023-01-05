#include <stdio.h>


void calculate_the_maximum(int n, int k) {
  
  int XOR,AND,OR,M1=0,M2=0,M3=0;
  for(int i=1;i<=n;i++)
  {
      for(int j =i+1;j<=n;j++)
      {
          XOR = i^j;
          AND = i&j;
          OR =  i|j;
          if(AND < k && AND> M1)
          {
             M1 = AND;
          }
          if(OR <k && OR > M2)
          {
              M2 = OR;
          }
          if(XOR < k && XOR >M3)
          {
              M3 = XOR;
          }
      }
  }
  printf("%d\n",M1);
  printf("%d\n",M2);
  printf("%d\n",M3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
