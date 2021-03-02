#include <iostream>

using namespace std;

int main()
{
  int i, num, expo, power = 1;
  cout<<"Enter the base number: ";
  cin>>num;
  cout<<"Enter the exponent: ";
  cin>>expo;
  for(i = 1; i<=expo; i++) {
      power = power * num;
  }
  cout<<power;
    return 0;
}

