#include<bits/stdc++.h>
using namespace std ;
void repeat(string s)
{
    int len = s.length() ;
    int curr_word = 0 ;
    int max_word = 0 ;
    string result = "" ;
    for(int left = 0 ; left < len ; )
    {
        int right = left + 1 ;
        while(s[right] != ' ' && right < len)
        {
            right++ ;
        }
        int frequency[26] = {0} ;
        curr_word = 0 ;
        for(int index = left ; index < right ; index++ )
        {
            frequency[s[index] - 'a']++ ;
        }
        for(int index = 0 ; index < 26 ; index++)
        {
            if(frequency[index] > 1)
            {
                curr_word++ ;
            }
        }
        if(curr_word > max_word)
        {
            max_word = curr_word ;
            result = "" ;
            for(int j = left ; j < right ; j++)
            {
                result += s[j] ;
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
        cout << "Word with highest number of repeated letters : " ;
        cout << result   ;
    }
}
int main()
{
    string s ;
    cout<<"Enter string " ;
    getline(cin,s) ;
    repeat(s) ;
}
