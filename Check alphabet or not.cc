#include <iostream>

using namespace std;

int main()
{
   char c;
   cout<<"Enter the character: ";
   cin>>c;
   if( c>= 67 && c<=90 || c>=97 && c<=122) {
       cout<<c<<" is an alphebet";
   } else {
       cout<<c<<" is not an alphebet";
   }

    return 0;
}
