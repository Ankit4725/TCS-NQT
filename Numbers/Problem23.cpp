#include<bits/stdc++.h>
using namespace std ;
void automorphic(long long int number)
{
    long long int sq = number*number ;
    long long int r = sq%10 ;
    long long int r1 = number%10 ;
    if(r == r1)
    {
        cout<<"Automorphic Number " ;
    }
    else
    {
        cout<<"Not Automorphic Number " ;
    }
}
int main()
{
    long long int number ;
    cout<<"Enter number " ;
    cin>>number ;
    automorphic(number) ;
}
