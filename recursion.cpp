// A recurion code for printing 1 to 50 numbers 


#include<iostream>
using namespace std;

void printNumbers(int n)
 {
    if (n == 0) return; 
    printNumbers(n - 1); 
    cout << n << " ";
}

int main()
 {
    printNumbers(50);  
    return 0;
}


