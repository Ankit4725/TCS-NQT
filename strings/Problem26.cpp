#include<bits/stdc++.h>
using namespace std ;
void concat_strings(string a , string b)
{
    string result ;
    result = a.append(b) ;
    cout<<"Concatenation of Strings : "<<result ;
}
int main()
{
    string a ;
    cout<<"Enter string a: " ;
    getline(cin,a) ;
    string b ;
    cout<<"Enter string b: " ;
    getline(cin,b) ;
    concat_strings(a,b) ;
}
