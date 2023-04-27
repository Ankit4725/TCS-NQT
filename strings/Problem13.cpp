#include<bits/stdc++.h>
using namespace std ;
void anagram(string s , string r)
{
    int count = 0 ;
    sort(s.begin(),s.end()) ;
    sort(r.begin(),r.end()) ;
    for(int i = 0 ; i < s.length() ; i++)
    {
        for(int j = 0 ; j < r.length() ; j++)
        {
            if(s[i]==r[j])
            {
                count++ ;
            }
        }
    }
    if(count==s.length() && count == r.length())
    {
        cout<<"true" ;
    }
    else
    {
        cout<<"false" ;
    }
}
int main()
{
    string s ;
    cout<<"Enter string 1 " ;
    getline(cin,s) ;
    string r ;
    cout<<"Enter string 2 " ;
    getline(cin,r) ;
    anagram(s,r) ;
}
