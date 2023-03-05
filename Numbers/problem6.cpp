#include<bits/stdc++.h>
using namespace std ;
void perfect_number(int number)
{
    int sum = 0 ;
    for(int i = 1 ; i < number ; i++)
    {
        if(number%i==0)
        {
            sum = sum + i ;
        }
    }
    if(sum == number)
    {
        cout<<number<<" "<<"is a perfect number" ;
    }
    else
    {
        cout<<number<<" "<<"is not a perfect number" ;
    }
}
int main()
{
    int number ;
    cout<<"Enter number " ;
    cin>>number ;
    perfect_number(number) ;
}
