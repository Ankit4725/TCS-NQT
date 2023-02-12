#include<bits/stdc++.h>
using namespace std ;
void symmetric(int arr[][100] , int rows , int columns)
{
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = i + 1 ; j < rows ; j++)
        {
            if(arr[j][0] == arr[i][1] && arr[j][1] == arr[i][0])
            {
                cout<<"("<<arr[i][1]<<","<<arr[i][0]<<")"<<" " ;
                break ;
            }
            
        }
    }
}
int main()
{
    int rows ;
    cout<<"Enter number of rows " ;
    cin>>rows ;
    int cols ;
    cout<<"Enter number of columns " ;
    cin>>cols ;
    int arr[100][100] ;
    for(int i = 0 ; i < rows ; i++)
    {
        for(int j = 0 ; j < cols ; j++)
        {
            cin>>arr[i][j] ;
        }
    }
  symmetric(arr,rows,cols) ;
    
}
