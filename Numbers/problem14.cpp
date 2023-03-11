#include<bits/stdc++.h>
using namespace std ;
void leap_year(int year)
{
    if(year%4==0)
    {
        if(year%100 != 0)
        {
            cout<<"Yes" ;
        }
        else if(year%100 == 0 && year%400 == 0)
        {
            cout<<"Yes" ;
        }
        else
        {
            cout<<"No" ;
        }
    }
    else
    {
        cout<<"No" ;
    }
}
int main()
{
    int year ;
    cout<<"Enter year " ;
    cin>>year ;
    leap_year(year) ;
}
