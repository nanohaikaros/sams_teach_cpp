#include <iostream>
using namespace std;

int main() 
{
    cout << "Is it sunny (y/n)? ";
    char userInput = 'y';
    cin >> userInput;

    // declare pointer and initialize
    bool* const isSunny = new bool;
    *isSunny = true;

    if(userInput == 'n')
        *isSunny = false;

    cout << "boolean flag sunny says: " << *isSunny << endl;

    // release valid memeory
    delete isSunny;

    return 0; 
}