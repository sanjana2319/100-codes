#include <iostream>

using namespace std;

int main()
{
   int divi = 0, i,num;
   cin>>num;
    for( i = 1; i<=num; i++) {
        if(num%i == 0) {
            divi++;
        }
    }
    if(divi == 2) {
        cout<<num<<" is a prime number";
    } else {
        cout<<num<<" is not a prime number";
    }

    return 0;
}

