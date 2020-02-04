//program to reverse an integer entered by a user

#include <iostream>
using namespace std;

int main()
{
    int num;
    int reverseNum = 0;

    cout << "Please enter an integer: " << endl;
    cin >> num;

    int tempNum = num;

    while(tempNum != 0){

        reverseNum = reverseNum * 10 + tempNum % 10;
        tempNum /= 10;
    }

    cout << "Reversed integer is: " << reverseNum << endl;
}
