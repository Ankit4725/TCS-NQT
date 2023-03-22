#include<bits/stdc++.h>
using namespace std ;
void permutation(int n , int r)
{
    int fact = 1 ;
    int x = n-r ;
    for(int i = n ; i > 0 ; i--)
    {
        fact = fact * i ;
    }
    int  facto = 1 ;
    for(int i = x ; i > 0 ; i--)
    {
        facto = facto*i ;
    }
    int result ;
    result = fact/facto ;
    cout<<result ;
}
int main()
{
    int n ;
    cout<<"Enter n " ;
    cin>>n ;
    int r  ;
    cout<<"Enter r " ;
    cin>>r ;
    permutation(n,r) ;
}
