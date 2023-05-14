#include<bits/stdc++.h>
using namespace std ;
void position_substring(string s1 , string s2)
{
    int word = 0 ;
    for(int i = 0 ; i < s2.length() ; i++)
    {
        for(int j = 0 ; j < s1.length() ; j++)
        {
            if(s2[i]==s1[j])
            {
                cout<<j ;
                word++ ;
                break ;
            }
        }
        if(word==1)
        {
            break ;
        }
    }
    if(word == 0)
    {
        cout<<-1 ;
    }
}
int main()
{
    string s1 ;
    cout<<"Enter string 1 " ;
    getline(cin,s1) ;
    string s2 ;
    cout<<"Enter string 2 " ;
    getline(cin,s2) ;
    position_substring(s1,s2) ;
}
