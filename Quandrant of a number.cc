#include <iostream>

using namespace std;

int main()
{
    int x,y;
   cin>>x>>y;
   if(x>0 && y>0) {
       cout<<x<<" and "<<y<<" lies in 1st quadrant";
   } else if(x<0 && y>0) {
       cout<<x<<" and "<<y<<" lies in 2nd quadrant";
   } else if (x<0 && y<0) {
       cout<<x<<" and "<<y<<" lies in 3rd quadrant";
   } else if(x>0 && y<0) {
       cout<<x<<" and "<<y<<" lies in 4th quadrant";
   } else if((x>0 || x<0) && y==0) {
       cout<<x<<" and "<<y<<" lies on x axis";
   } else if((y>0 || y<0) && x==0) {
       cout<<x<<" and "<<y<<" lies on y axis";
   }
    return 0;
}
