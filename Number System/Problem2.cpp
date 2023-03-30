#include<bits/stdc++.h>
using namespace std ;
void octal(int sum)
{
    int rem ;
    vector<int> a ;
    while(sum > 0)
    {
        rem = sum%8 ;
        a.push_back(rem) ;
        sum = sum/8 ;
    }
    for(int i = a.size()-1 ; i >= 0 ; i--)
    {
        cout<<a[i] ;
    }
}
void decimal(int number)
{
    int r ;
    int result ;
    int i = 0 ;
    int sum  = 0 ;
    while(number > 0)
    {
        r = number%10 ;
        number = number/10 ;
        result = r*pow(2,i) ;
        i++ ;
        sum = sum + result ;
    }
    octal(sum) ;
}
int main()
{
    int number ;
    cout<<"Enter N " ;
    cin>>number ;
    decimal(number) ;
}

For mathematical logic you can refer this site :-  https://www.cuemath.com/numbers/binary-to-octal-conversion/
