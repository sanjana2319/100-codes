#include <iostream>

using namespace std;

int main()
{
   int num, sum = 0, i, divi,temp;
   cout<<"Enter the number: ";
   cin>>num;
   temp = num;
    while(num>0) {
        divi = num%10;
        sum = sum+divi;
        num = num/10;
    }
    cout<<sum;
    return 0;
}
