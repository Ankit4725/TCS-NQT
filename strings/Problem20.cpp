Change every letter with next lexicographic alphabet
#include<bits/stdc++.h>
using namespace std ;
void lexicographic(string a)
{
    int ascii ;
    for(int i = 0 ; i < a.length() ; i++)
    {
        if(a[i] == 'z')
        {
            a[i] = 'a' ;
        }
        else
        {
            ascii = (int)a[i] ;
            a[i] = ascii + 1 ; 
        }
    }
    for(int i = 0 ; i < a.length() ; i++)
    {
        cout<<a[i] ;
    }
}
int main()
{
    string a ;
    cout<<"Enter string " ;
    getline(cin,a) ;
    lexicographic(a) ;
}
