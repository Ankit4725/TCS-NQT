#include<bits/stdc++.h>
using namespace std ;
void reverse_words(string s)
{
    string temp ;
    string ans = " " ;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] != ' ')
        {
          temp = temp + s[i] ;
        }
        else
        {
            if(ans == " ")
            {
                temp = ans ;
            }
            else
            {
                ans = temp + " " + ans ;
            }
            temp = " " ;
        }
          
    }
    if(temp!=" ")
    {
        ans = temp + " " + ans ;
    }
    cout<<ans ;
}
int main()
{
    string s ;
    cout<<"Input: " ;
    getline(cin,s);
    reverse_words(s) ;
}
