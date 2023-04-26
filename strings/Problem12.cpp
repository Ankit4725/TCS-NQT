#include<bits/stdc++.h>
using namespace std ;
void non_repeating(string s)
{
    int count = 0 ;
    string r ;
    for(int j = 0 ; j < 1 ; j++)
    {
        for(int i = j+1 ; i < s.length() ; i++)
        {   
            if(s[j]==s[i])
            {
                count++ ;
                break ;
            }
        }
        if(count==0)
        {
            r.push_back(s[j]) ;
        }
    }

    int flag = 0 ;
     for(int j = 1 ; j < s.length() ; j++)
    {
        for(int i = 0 ; i < s.length() ; i++)
        {   
            if(s[j]==s[i])
            {
                flag++ ;
            }
        }
        if(flag <= 1)
        {
            r.push_back(s[j]) ;
        }
        flag = 0 ;
    }

    for(int i = 0 ; i < r.length() ; i++)
    {
        cout<<r[i]<<" " ;
    }
  
}
int main()
{
    string s ;
    cout<<"Enter string " ;
    getline(cin,s) ;
    non_repeating(s) ;
}
