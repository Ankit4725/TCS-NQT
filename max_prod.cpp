#include<bits/stdc++.h>
using namespace std ;
void max_prod(vector<int> k)
{
    int result = k[0] ;
    for(int i = 0 ; i < k.size() ; i++)
    {
        int mult = k[i] ;
       for(int j = i + 1 ; j < k.size() ; j++)
       {
           result = max(result,mult) ;
           mult *= k[j] ; 
       }
        // For (n-1)th index
        result = max(result,mult) ;
       
    }
    cout<<result  ;
}
int main()
{
    int size ;
    cout<<"Enter size " ;
    cin>>size ;
    int a ;
    vector<int> k ;
    cout<<"Enter elements " ;
    for(int i = 0 ; i < size ; i++)
    {
        cin>>a ;
        k.push_back(a) ;
    }
    max_prod(k) ;
}
