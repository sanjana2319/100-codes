#include <iostream>

using namespace std;

int main()
{
   int num, rev = 0, i, divi,temp;
   cout<<"Enter the number: ";
   cin>>num;
   temp = num;
    while(num>0) {
        divi = num%10;
        rev = rev*10 + divi;
        num = num/10;
    }
    if(rev == temp) {
        cout<<temp<<" is a palindrome";
    } else {
        cout<<temp<<" is not a palindrome";
    }
    return 0;
}