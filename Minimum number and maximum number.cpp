// Minimum number and maximum number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <iostream>
#include <iostream>
using namespace std;

int main() {
    int myNum[4] = { 5, 20, 2, 7 };
    int sum = 0;
    int minNum;

    cout << " The arrays contains these numbers: " << endl;

    for (int j = 1; j <= 1; j++) {

        for (int j = 0; j < 4; j++) {
            cout << myNum[j] << " ";
            sum += myNum[j];

        }
        cout << endl;
    }
    cout << "The sum is " << sum << endl;

    for (int j = 0; j < 4; j++) {
        minNum = myNum[0];
        if (myNum[j] < minNum) {
            cout << "The minimum number is " << myNum[j];

        }

    }

    cout << endl;
    cout << "The array in reverse is: " << endl;


    for (int j = 4 - 1; j >= 0; j--) {
        cout << myNum[j] << " ";



    }

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
