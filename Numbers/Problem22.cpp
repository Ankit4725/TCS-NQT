#include<bits/stdc++.h>
using namespace std ;
void strong_number(int n)
{
    int r ;
    int fact = 1 ;
    int original = n ;
    int sum = 0 ;
    while(n>0)
    {
        r = n%10 ;
        n = n/10 ;
        for(int i = r ; i > 0 ; i--)
        {
            fact = fact*i ;
        }
        sum = sum + fact ;
        fact = 1 ;
    }
    if(sum == original)
    {
        cout<<"Yes" ;
    }
    else
    {
        cout<<"No" ;
    }
    
}
int main()
{
    int n ;
    cout<<"Enter number " ;
    cin>>n ;
    strong_number(n) ;
}
