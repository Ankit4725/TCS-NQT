//Rotate array by k elements or block-swap-algorithm
#include<bits/stdc++.h>
using namespace std ;
void swap(int arr[] , int a , int b , int k )
{
    for(int i = 0 ; i<k ; i++)
    {
        int temp ;
        temp = arr[a+i] ;
        arr[a+i] = arr[b+i] ;
        arr[b+i] = temp ;
    }
}
void blockswap(int arr[] , int k , int n )
{
    if(n==k || n==0)
    {
        return ;
    }
    else if(k == n-k)
    {
        swap(arr,0,n-k,k) ;
        return ;
    }
    else if(k<n-k)
    {
        swap(arr,0,n-k,k) ;
        blockswap(arr,k,n-k) ;
    }
    else
    {
        swap(arr,0,k,n-k) ;
        blockswap(arr+n-k , 2*k-n , k) ;
    }
}
int main()
{
    int n ;
    cout<<"Enter n : " ;
    cin>>n ;
    int k  ;
    cout<<"enter k " ;
    cin>>k ;
    int arr[12] ;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i] ;
    }
    blockswap(arr,k,n) ;
    cout<<"after rotation " ;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" " ;
    }
}
