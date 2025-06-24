#include<iostream>
using namespace std;
void addFive(int num)
 {
    num = num + 5;
    cout << "Inside function num: " << num << endl;
}
int main()
 {
    int number = 10;

    cout << "Before function call number: " <<number << endl;
addFive(number);

    cout<< "After function call  number: " <<number << endl;

    return 0;
}

