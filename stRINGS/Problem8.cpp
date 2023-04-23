#include<bits/stdc++.h>
using namespace std ;
void remove_brackets(string s)
{
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == '(' || s[i] == ')')
        {
            continue ;
        }
        else
        {
            cout<<s[i]<<" " ;
        }
    }
}
int main()
{
    string s ;
    cout<<"Enter expression " ;
    getline(cin,s) ;
    remove_brackets(s) ;
}
