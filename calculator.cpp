#include<iostream>
using namespace std;

inline int add (int a, int b)                       // using inline function
{
    return a+b;
}

inline int subtract (int a, int b)                  // using inline function
{
    return a-b;
}

inline int multiply (int a, int b)                  // using inline function
{
    return a*b;
}

inline int divide (int a, int b)                    // using inline function
{
    return a/b;
}

int main (int argc, char *argv[])
{
    int a, b;
    char choice;
    cout << "Choose an operator you'd like to perform?" << endl;
    cout << "+ - * /\n" << "What's your option: ";
    cin >> choice;
    cout << "Enter the first and the second number: ";
    cin >> a >> b;
    switch(choice)
    {
        case '+': cout << add (a, b) << endl;
                  break;
        case '-': cout << subtract (a, b) << endl;
                  break;     
        case '*': cout << multiply (a, b) << endl;
                  break;
        case '/': cout << divide (a, b) << endl;
                  break;
        default: cout << "Ah, oh!\n";
    }
    return 0;
} 
