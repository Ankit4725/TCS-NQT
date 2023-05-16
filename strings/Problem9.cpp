#include<bits/stdc++.h>
#include <string>
using namespace std ;
void sum_number(string s)
{
    string tempsum = " " ;
    int final = 0 ;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            tempsum = tempsum + s[i] ;
        }
        else if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
                if(tempsum != " ")
                {
                    final = final + stoi(tempsum) ;
                }
                tempsum = " " ;

        }
    }
    if(tempsum == " ")
    {
        cout<<final ;
    }
    else if(tempsum != " ")
    {
        int sum ;
        sum = final + stoi(tempsum) ;
        cout<<sum ;
    }
}
int main()
{
    string s ;
    cout<<"Input String : " ;
    getline(cin,s) ;
    sum_number(s) ;
}
