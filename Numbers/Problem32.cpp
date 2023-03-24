#include<bits/stdc++.h>
using namespace std ;
void replace(int number)
{
    vector<int> a ;
    int digit ;
    while(number > 0)
    {
        digit = number%10 ;
        a.push_back(digit) ;
        number = number/10 ;
    }
    int last_index = a.size() - 1;
    for(int i = last_index ; i >= 0 ; i--)
    {
       if(a[i] == 0)
       {
           a[i] = 1 ;
       }
    }
    for(int i = last_index ; i >= 0 ; i--)
    {
       cout<<a[i] ;
    }
}
int main()
{
    int number ;
    cout<<"Enter number " ;
    cin>>number ;
    replace(number) ;
}
