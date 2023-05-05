#include<bits/stdc++.h>
using namespace std ;
void dupli(string s)
{
    map<char,int> z ;
    for(int i = 0 ; i < s.length() ; i++)
    {
       z[s[i]]++ ;
    }
    for(auto i:z)
    {
        if(i.second>1)
        {
            cout<<i.first<<"-"<<i.second<<endl ;
        }
    }
    
}
int main()
{
    string s ;
    cout<<"Enter string " ;
    getline(cin,s) ;
    dupli(s) ;
}
