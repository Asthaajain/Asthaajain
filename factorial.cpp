#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    int n;

    cout << "\n\t Enter the number for factorial: ";
    cin >> n;

    cout << "\n\t Factorial of " << n << " = " << factorial(n)<<"\n\n\n";

    return 0;
}
