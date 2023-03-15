#include<bits/stdc++.h>
using namespace std ;
void prime_factors(int N)
{
    int i = 2 ;
    int r ;
    while(N != 1)
    {
        r = N%i ;
        if(r == 0)
        {
            N = N/i ;
            if(N==1)
            {
                cout<<i ;
            }
            else
            {
                cout<<i<<"," ;
            }
        }
        else
        {
            i++ ;
        }
        
    }
}
int main()
{
    int N ;
    cout<<"Enter n: " ;
    cin>>N ;
    prime_factors(N) ;
}
