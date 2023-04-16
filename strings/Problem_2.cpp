#include<bits/stdc++.h>
using namespace std ;
void vowels_consonants_spaces(string s)
{
    int vowels = 0 ;
    int space = 0 ;
    int consonant = 0 ;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowels++ ;
        }
        else if(s[i] == ' ')
        {
            space++ ;
        }
        else
        {
            consonant++ ;
        }
    }
    cout<<"Vowels: "<<vowels<<endl ;
    cout<<"Consonants: "<<consonant<<endl ;
    cout<<"White spaces: "<<space ;
}
int main()
{
    string s ;
    cout<<"Enter String " ;
    getline(cin,s) ;
    vowels_consonants_spaces(s) ;
}
