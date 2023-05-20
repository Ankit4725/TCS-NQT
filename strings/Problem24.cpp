#include<bits/stdc++.h>
using namespace std ;
void word_highest(string s)
{
    int curr_word ;
    int max_word = 0 ;
    string result  ;
    for(int left = 0 ; left < s.length() ; )
    {
        int right = left + 1 ;
        while(s[right] != ' ' && right < s.length())
        {
            right++ ;
        }
        int freq[26] = {0} ;
        curr_word = 0 ;
        for(int index = left ; index < right ; index++)
        {
            freq[s[index]-'a'] = freq[s[index]-'a'] + 1 ;
        }
        for(int index = 0 ; index < 26 ; index++)
        {
            if(freq[index] > 1)
            {
                curr_word++ ;
            }
        }
        if(curr_word > max_word)
        {
            max_word = curr_word ;
            result = " " ;
            for(int j = left ; j < right ; j++)
            {
                result = result + s[j] ;
            }
        }
        left = right + 1 ;
    }
    if(result.empty())
    {
        cout<<"-1" ;
    }
    else
    {
        cout<<result ;
    }
}
int main()
{
    string s ;
    cout<<"string = " ;
    getline(cin,s) ;
    word_highest(s) ;
}
