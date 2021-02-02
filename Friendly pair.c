#include <stdio.h>

int main()
{
   int num1,num2,sum1=0,sum2=0,i;
   printf("Enter num1: ");
   scanf("%d", &num1);
   printf("Enter num2: ");
   scanf("%d", &num2);
  for(i=1; i<= (num1/2); i++) {
      if(num1%i == 0) {
          sum1 = sum1 + i;
      }
  }
  for(i=1; i<= (num2/2); i++) {
      if(num2%i == 0) {
          sum2 = sum2 + i;
      }
  }
if(sum1/num1 == sum2/num2) {
    printf("%d and %d are a friendly pair", num1, num2);
} else {
    printf("%d and %d is not an friendly pair", num1, num2);
}
    return 0;
}
