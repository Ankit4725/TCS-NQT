#include<bits/stdc++.h>
using namespace std ;
void change_case(string r)
{
    for(int i = 0 ; i < r.length() ; i++)
    {
        if(r[i] >= 'a' && r[i] <= 'z')
        {
            r[i] = toupper(r[i]) ;
        }
        else if(r[i] >= 'A' && r[i] <= 'Z')
        {
            r[i] = tolower(r[i]) ;
        }
        
    }
    cout<<r ;
}
int main()
{
    string s ;
    cout<<"Enter string " ;
    getline(cin,s) ;
    change_case(s) ;
}

