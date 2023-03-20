#include<bits/stdc++.h>
using namespace std ;
void sum(int number)
{
    int r ;
    int sum = 0 ;
    while(number > 0)
    {
        r = number%10 ;
        number = number/10 ;
        sum = sum + r ;
    }
    cout<<sum ;
}
int main()
{
    int number ;
    cout<<"Enter the number " ;
    cin>>number ;
    sum(number) ;
}
