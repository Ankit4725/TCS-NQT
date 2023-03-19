#include<bits/stdc++.h>
using namespace std ;
void harshad(int num)
{
    int r ;
    int sum = 0 ;
    int original = num ;
    while(num > 0)
    {
        r = num%10 ;
        num = num/10 ;
        sum = sum + r ;
    }
    if(original%sum == 0)
    {
        cout<<"Yes it is a Harshad number." ;
    }
    else
    {
        cout<<"No it is not a Harshad number." ;
    }
}
int main()
{
    int num ;
    cout<<"Enter num : " ;
    cin>>num ;
    harshad(num) ;
}
