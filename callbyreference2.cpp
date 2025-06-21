#include<iostream>
using namespace std ; 

int main ()
{
    int a = 50 , b = 100 ;

    cout<<"Before Swapping the value of a is :"<<a<<" and value of b is "<<b<<endl;

    swap(a,b) ; 

    cout<<"After Swapping the value of a is : "<<a<<" and value of b is "<<b<<endl;


}

void swap( int &x , int &y)
{
    int temp = x ;
    x = y ;
    y = temp ;
}