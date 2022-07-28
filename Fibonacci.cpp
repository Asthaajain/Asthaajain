#include <iostream>
using namespace std;

int fib(int x) 
{
   if((x==1)||(x==0)) 
   {
      return(x);
   }
   else 
      return(fib(x-1)+fib(x-2));
}

int main() 
{
   int x , i=0;
   cout << "\n\n Enter the number of terms of series : ";
   cin >> x;
   cout << "\n Fibonnaci Series : ";
   while(i < x) 
   {
      cout << " " << fib(i);
      i++;
   }
   cout<<"\n\n\n\n";
   return 0;
}
