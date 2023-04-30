#ifndef FRACTION
#define FRACTION
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "Fraction.hpp"

using namespace std;

namespace ariel
{
    Fraction::Fraction()
    {
    }
    Fraction::Fraction(int numerator, int denominator)
    {
    }
    Fraction::Fraction(float n) {}
    int Fraction::getDenominator() {return 1;}
    int Fraction::getNumerator() {return 1;}
    void Fraction::setDenominator(int number) {}
    void Fraction::setNumerator(int number) {}
    Fraction Fraction::operator+(const Fraction &other) const {return other;}
    Fraction Fraction::operator-(const Fraction &other) const {return other;}
    Fraction Fraction::operator*(const Fraction &other) const {return other;}
    Fraction Fraction::operator/(const Fraction &other) const {return other;}
    bool Fraction::operator==(const Fraction &other) const {return true;}
    bool Fraction::operator<=(const Fraction &other) const {return true;}
    bool Fraction::operator>=(const Fraction &other) const {return true;}
    bool Fraction::operator>(const Fraction &other) const {return true;}
    Fraction Fraction::operator++(int n) {return *this;}
    Fraction &Fraction::operator++() {return *this;}
    Fraction Fraction::operator--(int n) {return *this;}
    Fraction &Fraction::operator--() {return *this;}

    Fraction operator+(float frac, Fraction &other){return other;}
    Fraction operator-(float frac, Fraction &other){return other;}
    Fraction operator*(float frac, Fraction &other){return other;}
    Fraction operator/(float frac, Fraction &other){return other;}
    ostream &operator<<(ostream &os, const Fraction &){return os;}
    istream &operator>>(istream &in, const Fraction &){return in;}
}
#endif