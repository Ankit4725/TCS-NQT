#include<bits/stdc++.h>
using namespace std ;
void sum_prime(vector<int> &a , int number)
{
    int sum ;
    for(int i = 0 ; i < a.size() ; i++)
    {
        for(int j = i+1 ; j < a.size() ; j++)
        {
            sum = a[i] + a[j] ;
            if(sum == number)
            {
                break ;
            }
            sum = 0 ;
        }
        if(sum == number)
        {
            cout<<"True" ;
            break ;
        }
    }
    if(sum != number)
    {
        cout<<"False" ;
    }
    
}
void prime(int number)
{
    int count = 0 ;
    vector<int> a ;
    for(int i = 1 ; i <= number ; i++)
    {
        for(int j = 2 ; j < number ; j++)
        {
            if(i%j == 0)
            {
                count++ ;
            }
        }
        if(count == 1)
        {
            a.push_back(i) ;
        }
        count = 0 ;
    }
    sum_prime(a,number) ;
}
int main()
{
    int number ;
    cout<<"Enter number " ;
    cin>>number ;
    prime(number) ;
}
