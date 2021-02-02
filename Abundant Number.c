#include <stdio.h>

int main()
{
   int num,sum=0,i;
   printf("Enter the num: ");
   scanf("%d", &num);
  for(i=1; i<= (num/2); i++) {
      if(num%i == 0) {
          sum = sum + i;
      }
  }
if(sum > num) {
    printf("%d is an Abundant number", num);
} else {
    printf("%d is not an Abundant number", num);
}
    return 0;
}
