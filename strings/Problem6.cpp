#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string ch ;
    cout<<"Enter string " ;
    getline(cin,ch) ;
    for(int i = 0 ; i < ch.length() ; i++)
    {
        if(ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= 'A' && ch[i] <= 'Z' )
        {
            cout<<ch[i] ;
        }
    }
}
