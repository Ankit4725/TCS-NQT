#include<bits/stdc++.h>
using namespace std ;
void reverse_number(int number)
{
    int r ;
    while(number > 0)
    {
        r = number%10 ;
        number = number/10 ;
        if(r==0)
        {
            continue ;
        }
        cout<<r ;
    }
}
int main()
{
    int number ;
    cout<<"Enter number " ;
    cin>>number ;
    reverse_number(number) ;
}
