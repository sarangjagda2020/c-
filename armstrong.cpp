#include<iostream>
#include<cmath>
using namespace std;
int main () { 

int num , sum=0 , temp , digits=0  ;
cout<<"enter number ";
cin>>num;

temp = num ;
while(temp != 0)
{
    temp /=10;
    digits++;



}

temp=num;

while(temp != 0 )
{
    int digit = temp %10 ; 
    sum+= pow(digit,digits) ;
    temp /= 10 ;

}
 
 if(sum == num)
 cout<<num<<"Is an Armstrong number " ;

 else 
 cout<<num<<"IS not A Arstrong Number " ;


 return 0;
 

}