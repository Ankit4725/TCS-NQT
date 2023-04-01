#include<bits/stdc++.h>
using namespace std ;
void decimal_octal(int number)
{
    int r ;
    vector<int> a ;
    if(number < 8)
    {
        cout<<"8" ;
    }
    else
    {
        while(number > 8)
        {
            r = number%8 ;
            a.push_back(r) ;
            number = number/8 ;
        }
        a.push_back(number) ;
        for(int i = a.size()-1 ; i >= 0 ; i--)
        {
            cout<<a[i] ;
        }
    }
}
int main()
{
    int number ;
    cout<<"Enter number " ;
    cin>>number ;
    decimal_octal(number) ;
}
