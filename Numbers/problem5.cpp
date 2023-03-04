#include<bits/stdc++.h>
using namespace std ;
void Armstrong(int number , int digit)
{
    int r ;
    int sum = 0 ;
    int prod ;
    int temp = number ;
    while(number > 0)
    {
        r = number%10 ;
        number = number/10 ;
        prod = pow(r,digit) ;
        sum = sum + prod ;
    }
    if(sum == temp)
    {
        cout<<"Yes, it is an Armstrong Number" ;
    }
    else
    {
        cout<<"No, it is not an Armstrong Number" ;
    }
    
}
int main()
{
    int num ;
    cout<<"Enter number : " ;
    cin>>num ;
    int digit ;
    cout<<"Enter the number of digits " ;
    cin>>digit ;
    Armstrong(num,digit) ;
}
