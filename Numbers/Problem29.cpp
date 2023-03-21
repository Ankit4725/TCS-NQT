#include<bits/stdc++.h>
using namespace std ;
void sum(int l , int r)
{
    int sum = 0 ;
    for(int i = l ; i <= r ; i++)
    {
        sum = sum + i ;
    }
    cout<<sum ;
}
int main()
{
    int l ;
    cout<<"Enter l : " ;
    cin>>l ;
    int r ;
    cout<<"Enter r : " ;
    cin>>r ;
    sum(l,r) ;
}
