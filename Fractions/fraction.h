//
//  fraction.h
//  Fractions- Caden Finley
//
//  Created by Caden Finley on 9/4/23.
//
// Include iostream to get access to istream, ostream
#include <iostream>
using namespace std;

struct Fraction {
   int num;
   int den;
};

// A function to calculate the greatest common divisor will be useful
int gcd(int a, int b)
{
    if( b == 0 )
        return a;
    return gcd(b,a%b);
}

// All fraction values are reduced
// For example, we have 3/4 and never 9/12
// It would be good to create a function to do that
void reduce(Fraction &f)
{
    int common = gcd(f.num, f.den);
    f.num /= common;
    f.den /= common;
}

istream& operator>>(istream& in, Fraction &f)
{
    // Implement fraction input here
    cout << "Enter the numerator: ";
    in >> f.num;
    cout << "Enter the denominator: ";
    in >> f.den;
    return in;
}

ostream& operator<<(ostream& out, Fraction f)
{
    // Implement fraction output here
    out << f.num;
        if (f.den != 1) {
            out << "/" << f.den;
        }
        return out;
}

Fraction operator+(Fraction a, Fraction b)
{
    // Implement fraction addition here
    Fraction result;
    result.num = a.num * b.den + b.num * a.den;
    result.den = a.den * b.den;
    reduce(result);
    return result;
}

Fraction operator-(Fraction a, Fraction b)
{
    // Implement fraction subtraction (a-b) here
    Fraction result;
    result.num = a.num * b.den - b.num * a.den;
    result.den = a.den * b.den;
    reduce(result);
    return result;
}

Fraction operator*(Fraction a, Fraction b)
{
    // Implement fraction multiplication here
    Fraction result;
    result.num = a.num * b.num;
    result.den = a.den * b.den;
    reduce(result);
    return result;
}

Fraction operator/(Fraction a, Fraction b)
{
    // Implement fraction division (a/b) here
    Fraction result;
    result.num = a.num * b.den;
    result.den = a.den * b.num;
    reduce(result);
    return result;
}
