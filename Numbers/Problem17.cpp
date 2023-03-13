#include<bits/stdc++.h>
using namespace std ;
void fib(int N)
{
    int a = 0 ; 
    int b = 1 ;
    int sum ;
    if(N == 0)
    {
        cout<<a ;
    }
    else if(N == 1)
    {
        cout<<a<<" "<<b ;
    }
    else
    {
        cout<<a<<" "<<b<<" " ;
        for(int i = 0 ; i < N-1 ; i++)
        {
            sum = a + b ;
            a = b ;
            b = sum ;
            cout<<sum<<" " ;
        }
    }
}
int main()
{
    int N ;
    cout<<"Enter N: " ;
    cin>>N ;
    fib(N) ;
}
