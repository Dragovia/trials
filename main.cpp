#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int x;
   int counter =0;
   cin >> x;
long long int y = x;
   long long int newx = x ,newy=0;
   while(x/10 !=0 )
   {
       counter++;
       x = x/10;

   }
   counter = counter + 1;

   //cout << y << "new x"<<endl;
   while(counter--){
    //cout << y%10 << "yyy";
    newy = newy*10 +(y%10);

    y = y/10;
   }
   cout << newx<<endl;
   cout <<newy <<endl;


   if(newx - newy ==0 && newx > 0){
   cout<< true;
   }

   else
   {
       cout<< false;
   }


   //cout <<counter;
    return 0;
}
