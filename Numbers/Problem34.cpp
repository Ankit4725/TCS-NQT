#include<bits/stdc++.h>
using namespace std ;
void area_circle(double radius)
{
    double area ;
    area = 3.14*radius*radius ;
    cout<<area ;
}
int main()
{
    double radius ;
    cout<<"Enter radius of circle " ;
    cin>>radius ;
    area_circle(radius) ;
}
