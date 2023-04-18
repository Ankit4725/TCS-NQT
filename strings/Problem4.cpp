#include<bits/stdc++.h>
using namespace std ;
void remove_vowels(string s)
{
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            continue ;
        }
        else
        {
            cout<<s[i] ;
        }
    }
}
int main()
{
    string s ;
    cout<<"Enter string : " ;
    getline(cin,s) ;
    remove_vowels(s) ;
}
