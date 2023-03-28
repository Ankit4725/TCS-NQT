#include<bits/stdc++.h>
using namespace std ;
void roots(double a , double b , double c)
{
    double d = b*b - 4*a*c ;
    double x ;
    double y ;
    int i  ;
    if(d > 0)
    {
         x = (-b + sqrt(d))/2*a ;
         y = (-b - sqrt(d))/2*a ;
        cout<<"Roots are real and different, i.e "<<"("<<x<<","<<y<<")" ;
    }
    else if(d<0)
    {
        d = -d ;
        x = (-b)/2*a ;
        y = sqrt(d)/2*a;
        cout<<"Roots are complex, i.e "<<"("<<x<<"+"<<"i"<<y<<","<<x<<"-"<<"i"<<y<<")";
        
    }
    else
    {
        i = -b/2*a ;
        cout<<"Roots are real and same "<<i ;
    }
}
int main()
{
    double a ;
    cout<<"Enter a " ;
    cin>>a ;
    double b ;
    cout<<"Enter b " ;
    cin>>b ;
    double c ;
    cout<<"Enter c " ;
    cin>>c ;
    if(a == 0)
    {
        cout<<"Following equation is not a quadratic equation " ;
    }
    else
    {
        roots(a,b,c) ;
    }
}
