#include <bits/stdc++.h>
using namespace std;
double Pi = 1.6180339;
long long unsigned int f[6] = { 0, 1, 1, 2, 3, 5 };
long long unsigned int fib (long long unsigned int n)
{
    if (n < 6)return f[n];
    long long unsigned int t = 5, fn = 5;
    while (t < n) {
        fn = round(fn * Pi);
        t++;
    }
    return fn;
}int main()
{
    long long unsigned int n,i=1;
    cout<<"Enter any Number: ";
    cin>>n;
    while(i<=n){
        cout << i << "th Fibonacci Number = "<< fib(1) << endl;
        
    }
    eturn 0;}

