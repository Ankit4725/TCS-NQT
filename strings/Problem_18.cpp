#include<bits/stdc++.h>
using namespace std ;
void print_duplicates(string s)
{
    map<char,int> sr ;
    for(int i = 0 ; i < s.length() ; i++)
    {
        sr[s[i]]++ ;
    }
    for(auto i : sr)
    {
        if(i.second>=2)
        {
            cout<<i.first<<" - "<<i.second<<endl ;
        }
    }
}
int main()
{
    string a ;
    cout<<"Enter string : " ;
    getline(cin,a) ;
    print_duplicates(a) ;
}
