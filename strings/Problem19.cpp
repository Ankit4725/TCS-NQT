#include<bits/stdc++.h>
using namespace std ;
void remove_character(string a , string b)
{
    int count = 0 ;
    for(int i = 0 ; i < a.length() ; i++)
    {   
            count = 0 ;
        for(int j = 0 ; j < b.length() ; j++)
        {
            if(a[i] == b[j])
            {
                count++ ;
            }
        }
        if(count == 0)
        {
            cout<<a[i] ;
        }
    }
}
int main()
{
    string a ;
    cout<<"Enter string a " ;
    getline(cin,a) ;
    string b ;
    cout<<"Enter string b " ;
    getline(cin,b) ;
    remove_character(a,b) ;
}
