#include<bits/stdc++.h>
using namespace std ;
void largest_word(string str1 , string &minword , string &maxword)
{
    /* here minword and maxword are received by reference not by
       value it will be used to store and return output */ 
    // length of the string 
    int len = str1.length() ;
    int si = 0 , ei = 0 ;
    int min_length = len , min_start_index = 0 , max_length = 0 , max_start_index = 0 ;
    // Loop while input string is empty 
    while(ei <= len)
    {
            if(ei < len && str1[ei] != ' ')
            ei++ ;
            else
            {
                // end of a word 
               //  find curr word 
                    int curr_length = ei - si ;
                    if(curr_length < min_length)
                    {
                        min_length = curr_length ;
                        min_start_index = si ;
                    }
                    
                    if(curr_length > max_length)
                    {
                        max_length = curr_length ;
                        max_start_index = si ;
                    }
                    ei++ ;
                    si = ei ;
            }
    }
    // store minimum and maximum length words 
    minword = str1.substr(min_start_index , min_length) ;
    maxword = str1.substr(max_start_index , max_length) ;
}
int main()
{
    string str1 ;
    cout<<"Enter string : " ;
    getline(cin,str1) ;
    string minword , maxword ;
    largest_word(str1,minword,maxword) ;
    cout<<"largest word  "<<maxword<<endl ;
    cout<<"Smallest word "<<minword ;
}
