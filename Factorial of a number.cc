#include <iostream>

using namespace std;

int main()
{
  int i, num, fact=1;
  cout<<"Enter the number: ";
  cin>>num;
  for(i = 1; i<=num; i++) {
      fact = fact*i;
  }
  cout<<fact;
    return 0;
}
