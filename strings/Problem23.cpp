#include<bits/stdc++.h>
using namespace std ;
void count_words(string s)
{
    int word = 0 ;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == ' ')
        {
            word++ ;
        }
    }
    cout<<"Number of words: "<<word+1 ;
}
int main()
{
    string s ;
    cout<<"Enter string s : " ;
    getline(cin,s) ;
    count_words(s) ;
}
