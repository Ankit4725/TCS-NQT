#include<bits/stdc++.h>
using namespace std ;
void decimal_binary(int number)
{
    int r ;
    vector<int> a ;
    while(number > 0)
    {
        r = number%2 ;
        a.push_back(r) ;
        number = number/2 ;
    }
    for(int i = a.size()-1 ; i >= 0 ; i--)
    {
        cout<<a[i] ;
    }
}
void octal_decimal(int number)
{
    int r ;
    int sum = 0 ;
    int i = 0 ;
    while(number > 0)
    {
        r = number%10 ;
        number = number/10 ;
        sum = sum + r*pow(8,i) ;
        i++ ;
    }
   decimal_binary(sum) ;
}
int main()
{
    int number ;
    cout<<"Enter number " ;
    cin>>number ;
    octal_decimal(number) ;
}
