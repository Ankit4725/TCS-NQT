#include<bits/stdc++.h>
using namespace std ;
void freq(string s)
{
   map<char,int> t ;
   for(int i = 0 ; i < s.length() ; i++)
   {
       t[s[i]]++ ;
   }
   for(auto i:t)
   {
       cout<<i.first<<i.second<<" " ;
   }
}
int main()
{
    string s ;
    cout<<"Enter string " ;
    getline(cin,s) ;
    freq(s) ;
}
