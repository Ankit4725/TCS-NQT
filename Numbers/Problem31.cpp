#include<bits/stdc++.h>
using namespace std ;
void fraction_add(int lcm , int a , int b , int c , int d)
{
    int p = lcm/b ;
    int q = lcm/d ;
    int x = a*p ;
    int y = c*q ;
    int sum = x+y ;
    for(int i = 2 ; i <= lcm ; i++)
    {
        if(sum%i == 0 && lcm%i == 0)
        {
            sum = sum/i ;
            lcm = lcm/i ;
            break ;
        }
    }
    cout<<sum<<"/"<<lcm ;
}
void fractions(int a , int b , int c , int d)
{
    int less = min(b,d) ;
    vector<int> v ;
    for(int i = 1 ; i <= less ; i++)
    {
        if(b%i == 0 && d%i == 0)
        {
            v.push_back(i) ;
        }
    }
    int max = INT_MIN ;
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(v[i] > max)
        {
            max = v[i] ;
        }
    }
    int lcm = b*d/max ;
    fraction_add(lcm,a,b,c,d) ;
}
int main()
{
    int a ;
    cout<<"Enter a: " ;
    cin>>a ;
    int b ;
    cout<<"Enter b: " ;
    cin>>b ;
    int c ;
    cout<<"Enter c: " ;
    cin>>c ;
    int d ;
    cout<<"Enter d: " ;
    cin>>d ;
    fractions(a,b,c,d) ;
}
