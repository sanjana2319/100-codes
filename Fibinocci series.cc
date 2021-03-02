#include <iostream>

using namespace std;

int main()
{
   int i, num, next, first=0, second=1;
   cout<<"Enter the series: ";
   cin>>num;
   for(i = 0; i<num; i++) {
       if(i<=1) {
           next = i;
       } else {
           next = first+second;
           first = second;
           second = next;
       }
       cout<<next<<endl;
   }
    return 0;
}