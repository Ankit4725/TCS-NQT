#include<bits/stdc++.h>
using namespace std ;
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
    cout<<sum ;
}
int main()
{
    int number ;
    cout<<"Enter number " ;
    cin>>number ;
    octal_decimal(number) ;
}
