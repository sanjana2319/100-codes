#include <iostream>

using namespace std;

int main()
{
    int i, fact,num;
 cout<<"Enter the number: ";
 cin>>num;
 cout<<"Factors are: ";
 for(i = 1; i<=num/2; i++) {
     if(num%i == 0) {
         cout<<i<<" ";
     }
 }

    return 0;
}
