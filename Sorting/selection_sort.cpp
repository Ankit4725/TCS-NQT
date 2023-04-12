#include<bits/stdc++.h>
using namespace std ;
void selection_sort(vector<int>& d)
{
    int x ;
    for(int i = 0 ; i < d.size()-1 ; i++)
    {
        for(int j = i ; j < d.size()-1 ; j++)
        {
            if(d[i] > d[j+1])
            {
                x = d[i] ;
                d[i] = d[j+1] ;
                d[j+1] = x ;
            }
        }
    }
    for(int i = 0 ; i < d.size() ; i++)
    {
        if(i == d.size()-1)
        {
            cout<<d[i] ;
        }
        else
        {
            cout<<d[i]<<"," ;
        }
    }
}
int main()
{
    int size ;
    cout<<"Enter size " ;
    cin>>size ;
    int a ;
    vector<int> d ;
    for(int i = 0 ; i < size ; i++)
    {
        cin>>a ;
        d.push_back(a) ;
        
    }
    selection_sort(d) ;
}
