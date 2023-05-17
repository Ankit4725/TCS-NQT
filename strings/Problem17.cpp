#include<bits/stdc++.h>
using namespace std ;
void remove_duplicate(string s)
{
   string result = " " ;
   int j ;
    for(int i = 0 ; i < s.length() ; i++)
    {
        for(j = 0 ; j < i ; j++)
        {
            if(s[i]==s[j])
            {
                break ;
            }
        }
        if(i==j)
        {
            result = result + s[i] ;
        }
    }
    cout<<result ;
}
int main()
{
    string s ;
    cout<<"Input: " ;
    getline(cin,s) ;
    remove_duplicate(s) ;
}
