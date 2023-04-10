#include<bits/stdc++.h>
using namespace std ;
void digit_word(string number)
{
    string one_digit[12] = {"zero","one","two","three","four","five","six","seven","eight","nine"} ;
    string two_digit[12] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"} ;
    string ten_multiple[12] = {"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"} ;
    if(number.length() == 1)
    {
        cout<<one_digit[number[0]-'0'] ;
    }
    else if(number.length() == 2)
    {
        if(number[0]-'0' == 1)
        {
            cout<<two_digit[number[0]-'0'] ;
        }
        else
        {
            cout<<ten_multiple[number[0]-'2'] ;
            if(number[1]-'0'!= 0)
            {
                cout<<one_digit[number[1]-'0'] ;
            }
        }
    }
    else if(number.length() == 3)
    {
        cout<<one_digit[number[0]-'0']<<" "<<"hundred"<<" ";
        if(number[1]-'0'== 1)
        {
            cout<<two_digit[number[2]-'0'] ; 
        }
        else if(number[1]-'0'!= 0)
        {
            cout<<ten_multiple[number[1]-'2']<<" " ;
            if(number[2]-'0'!= 0)
            {
                cout<<one_digit[number[2]-'0'] ;
            }
        }
        else
        {
            if(number[2]-'0'!=0)
            {
                cout<<one_digit[number[2]-'0'] ;
            }
        }
        
    }
    else
    {
        cout<<one_digit[number[0]-'0']<<" "<<"thousand"<<" " ;
        if(number[1]-'0'!= 0)
        {
            cout<<one_digit[number[1]-'0']<<" "<<"hundred"<<" " ;
            if(number[2]-'0'== 1)
            {
                cout<<two_digit[number[3]-'0'] ;
            }
            else if(number[2]-'0'!= 0)
            {
                cout<<ten_multiple[number[2]-'2']<<" " ;
                if(number[3]-'0'!= 0)
                {
                    cout<<one_digit[number[3]-'0'] ;
                }
            }
            else
            {
                if(number[3]-'0'!= 0)
                {
                    cout<<one_digit[number[3]-'0'] ;
                }
            }
        }
        else
        {
            if(number[2]-'0' == 1)
            {
                cout<<two_digit[number[3]-'0'] ;
            }
            else if(number[2]-'0' != 0)
            {
                cout<<ten_multiple[number[2]-'2']<<" " ;
                if(number[3]-'0'!= '0')
                {
                    cout<<one_digit[number[3]-'0'] ;
                }
            }
            else
            {
                if(number[3]-'0'!=0)
                {
                    cout<<one_digit[number[3]-'0'] ;
                }
            }
        }
      
    }
}
int main()
{
    string number ;
    cout<<"Enter number : " ;
    cin>>number ;
    digit_word(number) ;
}
