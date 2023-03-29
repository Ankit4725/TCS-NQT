#include<bits/stdc++.h>
using namespace std ;
void binary_decimal(int number)
{
    int r ;
    int result ;
    int sum = 0 ;
    int i = 0 ;
    while(number > 0)
    {
        r = number%10 ;
        number = number/10 ;
        result = r*pow(2,i) ;
        i++ ;
        sum = sum + result ;
    }
    cout<<sum ;
}
int main()
{
    int number ;
    cout<<"Enter the number " ;
    cin>>number ;
    binary_decimal(number) ;
}

/* For mathematical logics you can refer this site */ :-  https://www.cuemath.com/numbers/binary-to-decimal/

