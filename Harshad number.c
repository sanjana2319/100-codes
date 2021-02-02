#include <stdio.h>

int main()
{
   int num, divi, sum=0,temp;
   printf("Enter the num: ");
   scanf("%d", &num);
   temp = num;
   while( num > 0) {
       divi = num%10;
       sum = sum + divi;
       num = num/10;
   }
if(temp%sum == 0) {
    printf("Harshad number of %d is %d", temp, temp/sum);
}
    return 0;
}
