#include<bits/stdc++.h>
using namespace std ;
void rotate(int arr[] , char choice , int p , int c)
{
    int temp[100]  ;
    // For right rotation
    if(choice == 'r')
    {
        for(int i = c-1 ; i >= c-p ; i--)
        {
            temp[i] = arr[i] ;
        }
        for(int i = c-p ; i < c ; i++)
        {
            cout<<temp[i]<<" " ;
        }
        for(int i = 0 ; i <= c-p-1 ; i++)
        {
            cout<<arr[i]<<" " ;
        }
        
        
    }
    // For left rotation
    else
    {
        for(int i = p ; i < c  ; i++)
        {
            cout<<arr[i]<<" " ;
        }
        for(int i = 0 ; i < p ; i++)
        {
            cout<<arr[i]<<" " ;
        }
    
     }
}
int main()
{
    int size ;
    cout<<"Enter size " ;
    cin>>size ; 
    int arr[100] ;
    cout<<"Enter elements " ;
    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i] ;
        
    }
    char choice ;
    cout<<"Enter choice " ;
    cin>>choice ;
    int r ;
    cout<<"No. of elements to be rotated " ;
    cin>>r ;
    rotate(arr,choice,r,size) ;
}
