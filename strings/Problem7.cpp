#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    cout<<"Enter string s: " ;
    getline(cin,s) ;
    for(int i = s.length()-1 ; i >= 0 ; i--)
    {
        cout<<s[i]<<" " ;
    }
}
