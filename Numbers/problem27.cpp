#include<bits/stdc++.h>
using namespace std ;
void abundant(int number)
{
    int sum = 0 ;
    for(int i = 1 ; i < number ; i++)
    {
        if(number%i == 0)
        {
            sum = sum + i ;
        }
    }
    if(sum > number)
    {
        cout<<"Abundant Number" ;
    }
    else
    {
        cout<<"Not Abundant Number" ;
    }
}
int main()
{
    int number ;
    cout<<"Enter number " ;
    cin>>number ;
    abundant(number) ;
}
