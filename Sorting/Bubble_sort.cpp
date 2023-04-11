#include<bits/stdc++.h>
using namespace std ;
void bubble_sort(vector<int>& p)
{
    int x ;
    for(int i = p.size()-1 ; i > 0 ; i--)
    {
        for(int j = 0 ; j < i ; j++)
        {
            if(p[j]>p[j+1])
            {
                x = p[j] ;
                p[j] = p[j+1] ;
                p[j+1] = x ;
                
                
            }
        }
    }
    for(int i = 0 ; i < p.size() ; i++)
    {
        if(i == p.size()-1)
         cout<<p[i] ;
        else
            cout<<p[i]<<"," ;
    }
}
int main()
{
    int n ;
    cout<<"Enter size " ;
    cin>>n ;
    int p ;
    vector<int> a ;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>p ;
        a.push_back(p) ;
    }
    bubble_sort(a) ;
}
