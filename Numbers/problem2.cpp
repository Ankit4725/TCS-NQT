#include<bits/stdc++.h>
using namespace std ;
void palin_range(int min , int max)
{
    int sum = 0 ;
    int rem ;
    int j ;
    for(int i = min ; i <= max ; i++)
    {
        int temp = i ;
        j = temp ; 
        while(j > 0)
        {
            rem = j%10 ;
            j = j/10 ;
            sum = sum*10 + rem ;
        }
        if(sum == temp)
        {
             cout<<sum<<" " ;
        }
        sum = 0 ;
    }
}
int main()
{
    int min ;
    cout<<"Enter the min number " ;
    cin>>min ;
    int max ;
    cout<<"Enter the max number " ;
    cin>>max ;
    palin_range(min,max) ;
}
