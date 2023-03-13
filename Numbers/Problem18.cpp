#include<bits/stdc++.h>
using namespace std ;
void factorial(int X)
{
    int fact = 1 ;
    if(X == 0)
    {
        cout<<fact ;
    }
    else
    {
        for(int i = X ; i > 0 ; i--)
        {
            fact = fact*i ;
        }
        cout<<fact ;
    }
}
int main()
{
    int X ;
    cout<<"Enter Number " ;
    cin>>X ;
    factorial(X) ;
}
