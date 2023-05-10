// w3schools.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
# include <string>
using namespace std;

void function(string parametre) {
    cout << parametre << endl;
}

int main()
{
    function("construct");
    cout << "Hello World!" << endl;
    int numbe = 20;
    cout << numbe << " people dead" << endl;
    int y = 9, sum = numbe + y;
    cout << sum << endl;
    const int myNumber = 5;
    string uinp;

    cout << "type word" << endl;
    getline (cin, uinp);
    cout << uinp << endl;

    cout << "Type a number\n";
    int num;
    cin >> num;
    int &rnum = num;
    cout << rnum;
    num -= 1;
    cout << rnum << endl;

    int nulist[3] = { 5, 3, 9 };
    cout << nulist[0] << endl;
    int &list1 = nulist[0];
    list1 -= 1;
    cout << nulist[0];

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
