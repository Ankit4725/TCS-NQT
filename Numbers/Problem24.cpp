#include<bits/stdc++.h>
using namespace std ;
void gcd(int num1, int num2)
{
    int a  ;
    a = min(num1,num2) ;
    vector<int> v ;
    for(int i = 1 ; i <= a ; i++)
    {
        if(num1%i == 0 && num2%i == 0)
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
    cout<<max ;
    
}
int main()
{
    int num1 ;
    cout<<"Enter num 1 " ;
    cin>>num1 ;
    int num2 ;
    cout<<"Enter num 2 " ;
    cin>>num2 ;
    gcd(num1,num2) ;
}
