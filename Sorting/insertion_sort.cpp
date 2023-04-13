#include<bits/stdc++.h>
using namespace std ;
void insertion_sort(vector<int>& h)
{
    int s ;
    for(int i = 0 ; i < h.size()-1 ; i++)
    {
       int  x = h.size()-1 ;
        int j = 0 ;
        while(x)
        {
          if(h[j]>h[j+1])
          {
             s = h[j] ;
             h[j] = h[j+1] ;
             h[j+1] = s ;
          }
          x-- ;
          j++ ;
        }
    }
    for(int z = 0 ; z < h.size() ; z++)
    {
        if(z == h.size()-1)
        {
            cout<<h[z] ;
        }
        else
        {
            cout<<h[z]<<" ," ;
        }
    }
}
int main()
{
    int size ;
    cout<<"Size of array " ;
    cin>>size ;
    int a ;
    vector<int> h ;
    for(int i = 0 ; i < size ; i++)
    {
        cin>>a ;
        h.push_back(a) ;
    }
    insertion_sort(h) ;
}
