#include<iostream> 
using namespace std ; 



  int add(int a, int  b )
  {
    return a + b ;
  }
   int main ()
    {
     int num1 , num2 , answer ; 
     
     cout<<"Enter First Number"<<endl;

     cin >> num1 ; 

     cout<<"Enter Second Number"<<endl ; 

     cin >> num2 ; 

    answer = add(num1 , num2) ; 

    cout<<"Sum  =  " <<answer<<endl ; 



    }

