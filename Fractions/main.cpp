//
//  main.cpp
//  Fractions- Caden Finley
//
//  Created by Caden Finley on 9/4/23.
//

#include <iostream>
#include "fraction.h"
using namespace std;

int main()
{
    Fraction frac1, frac2;

    cout << "Enter X: ";
    cin >> frac1;
    
    cout << "Enter Y: ";
    cin >> frac2;
    
    cout << endl;
    
    cout << "ADD: " << frac1+frac2 << endl;
    cout << "SUB: " << frac1-frac2 << endl;
    cout << "MUL: " << frac1*frac2 << endl;
    cout << "DIV: " << frac1/frac2 << endl;
}
