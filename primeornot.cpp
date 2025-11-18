#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int cnt = 0;
    if (n <= 1)
    { // argr 1 se chota  ho to pehle hi smjh gya ki prime nhi ho skta
        cout << n << "is not a Prime number";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)  //yha pta kr rhe ki wo kitnei bar i se divide ho rh hoga 
            {
                cnt++;   //jitni bar dive ho utni bar 1 incr kr do 
            }
        }
        if (cnt > 2)   //ab ya cheack kr rhe hain ki kya cnt 2 se barda hai agr h ro prime nhi hoga 
        {
            cout << "This is not  a Prime number";
        }
        else
        {
            cout << "This is an Prime number";
        }
    }
}