#include<bits/stdc++.h>
using namespace std ;
void frequency(string f)
{
    map<char,int> m ;
    for(int i = 0 ; i < f.length() ; i++)
    {
       m[f[i]]++ ;
    }
    vector<int> p ;
    for(auto i:m)
    {
        if(i.second > 1)
        {
           p.push_back(i.second) ;
        }
    }
    int max = INT_MIN ;
    for(int k = 0 ; k < p.size() ; k++)
    {
        if(p[k] > max)
        {
            max = p[k] ;
        }
    }
    for(auto i:m)
    {
        if(i.second == max)
        {
            cout<<i.first ;
            break ;
        }
    }
   
}
int main()
{
    string f ;
    cout<<"Enter string : " ;
    getline(cin,f) ;
    frequency(f) ;
}
