#include<bits/stdc++.h>
using namespace std ;
void capitalize(string s)
{
    s[0] = toupper(s[0]) ;
    int size = s.length()-1 ;
    s[size] = toupper(s[size]) ;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == ' ')
        {
           s[i-1]  =  toupper(s[i-1]) ;
            s[i+1] = toupper(s[i+1]) ;
        }
    }
    for(int i = 0 ; i < s.length() ; i++)
    {
        cout<<s[i] ;
    }
}
int main()
{
    string s ;
    cout<<"Enter string " ;
    getline(cin,s) ;
    capitalize(s) ;
}
