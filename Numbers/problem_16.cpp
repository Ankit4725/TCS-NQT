#include<bits/stdc++.h>
using namespace std ;
void max_min(int number)
{
    int r ;
    int original = number ;
    int digit = INT_MIN ;
    int temp  = INT_MAX ;
    // For finding largest digit
    while(number > 0)
    {
        r = number%10 ;
        number = number/10 ;
        if(r > digit)
        {
            digit = r ;
        }
    }
    // For finding smallest digit
    while(original > 0)
    {
        r = original%10 ;
        original = original/10 ;
        if(r < temp)
        {
            temp = r ;
        }
    }
    cout<<"Largest digit: "<<digit<<endl ;
    cout<<"Smallest digit: "<<temp ;
}
int main()
{
    int number ;
    cout<<"Enter number " ;
    cin>>number ;
    max_min(number) ;
}
