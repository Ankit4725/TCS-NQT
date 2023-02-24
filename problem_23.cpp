#include<bits/stdc++.h>
using namespace std ;
void sort_array(int a[] , int b[] , int size , int si)
{
    for(int i = 0 ; i < si ; i++)
    {
        for(int j = 0 ; j < size ; j++)
        {
            if(a[j] == b[i])
            {
                cout<<a[j]<<" " ; 
            }
        }
    }
    map<int,int> mp ;
    for(int i = 0 ; i < size ; i++)
    {
        mp[a[i]]++ ;
    }
    for(int j = 0 ; j < si ; j++)
    {
        mp.erase(b[j]) ;
    }
    for(auto i:mp)
    {
        cout<<i.first<<" " ;
    }
}
int main()
{
    int size ;
    cout<<"Enter size of a " ;
    cin>>size ;
    int a[100] ;
    cout<<"Enter elements in a " ;
    for(int i = 0 ; i < size ; i++)
    {
        cin>>a[i] ;
    }
    int si ;
    cout<<"Enter size of b " ;
    cin>>si ;
    int b[100] ;
    cout<<"Enter elements in b " ;
    for(int i = 0 ; i < si ; i++)
    {
        cin>>b[i] ;
    }
    sort_array(a,b,size,si) ;
}
