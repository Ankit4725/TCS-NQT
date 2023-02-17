#include<bits/stdc++.h>
using namespace std ;
void sort2d(int a[2][100] , int k)
{
    for(int i = 0 ; i < k-1 ; i++)
    {
        for(int j = 0 ; j < k-1-i ; j++)
        {
            if(a[1][j] < a[1][i+1])
            {
                swap(a[1][j] , a[1][j+1]) ;
                swap(a[0][j] , a[0][j+1]) ;
            }
        }
    }
}
void freq(int arr[] , int size)
{
    // Sorting the original input array
    sort(arr,arr+size) ;
    // Creating a 2d array
    int a[2][100] ;
    // For column count
    int k = 0 ;
    // For counting frequency of each number 
    int count = 0 ;
    for(int i = 0 ; i < size ; i++)
    {
        if(i==0)
        {
            a[0][k] = arr[i] ;
            count = 1 ;
        }
        else if(arr[i] == arr[i-1])
        {
            count++ ;
        }
        else
        {
            a[1][k] = count ; // storing the frequency of count in 2nd row
            count = 1 ;
            k++ ;
            a[0][k] = arr[i] ; // storing the frequency of count in 1st row
        }
    }
    a[1][k] = count ; // storing the frequency of count in 2nd row
    k++ ; 
    // sort the 2d array 
    sort2d(a,k) ;
    // store the answer in original array
    k = 0 ;
    int i = 0 ;
    while(i < size)
    {
        while(a[1][k] > 0)
        {
            arr[i] = a[0][k] ;
            i++ ;
            a[1][k]-- ;
        }
        k++ ;
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
    freq(arr,size) ;
     for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" " ;
    }
    
    
