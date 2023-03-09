#include<bits/stdc++.h>
using namespace std ;
void gp_series(double a , double n , double r)
{
    double p ;
    p = a*(1-pow(r,n)) ;
    double q ;
    q = 1 - r ;
    double ans = p/q ;
    cout<<ans ;
}
int main()
{
    double a ;
    cout<<"Enter first term " ;
    cin>>a ;
    double n ;
    cout<<"Enter n : " ;
    cin>>n ;
    double r ;
    cout<<"Enter common ratio " ;
    cin>>r ;
    gp_series(a,n,r) ;
}
