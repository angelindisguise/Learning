// Learning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables:
    int b, c;
    int result;
    string str1ng = "Hello g!\n";

    // Initialising variables:
    // c-like initialisation:
    float mynum = 12;
    // constructor initialisation:
    int y(2);
    // uniform initilisation:
    int x{6};

    int foo = 0;
    // the compiler can figure out the type of variable on its own so "auto" works as a type
    auto ball = foo;

    //uninitialised variables can use type deduction with decltype specifier
    //decltype(foo) scar = 1;

    // Process:
    b = 4;
    c = 8;
    b += 3;
    result = b - c;
    //scar += c;

    // Printing:
    cout << str1ng;
    cout << result << endl;
    cout << x << endl;
    cout << y  << endl;
    cout << mynum << endl;
    cout << ball << endl;
    //cout << scar;

    // Terminate program:
    return 0;

}

/*Initialising a variable refers to when a variable is declared and assigned a value 
in the same line it is declared*/
