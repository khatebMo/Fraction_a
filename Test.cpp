#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace ariel;


TEST_CASE("divide by zero!!")
{
   CHECK_THROWS(Fraction(3, 0));
   CHECK_THROWS(Fraction(5, 0));
   CHECK_THROWS(Fraction(17, 0));
   CHECK_THROWS(Fraction(8, 0));
}

TEST_CASE("constuctor check!")
{
   CHECK_NOTHROW(Fraction(3, 1));
   CHECK_NOTHROW(Fraction(3, 17));
   CHECK_NOTHROW(Fraction(71, 200));
}
TEST_CASE("test float + fraction operator")
{
   Fraction a(5, 2);
   float b = 0.5;
   Fraction c(6, 2);
   CHECK(b + a == c);
}
TEST_CASE("test fraction + float")
{
   Fraction a(1, 2);
   float b = 4.5;
   Fraction c(10, 2);
   CHECK(a + b == c);
}

TEST_CASE("Test fraction + fraction operator")
{
   Fraction a(1, 4);
   Fraction b(2, 8);
   Fraction c(3, 6);
   CHECK(a + b == c);
   Fraction a2(3, 5);
   Fraction b2(4, 10);
   Fraction c2(10, 10);
   CHECK(a2 + b2 == c2);
   Fraction a3(2, 3);
   Fraction b3(4, 3);
   Fraction c3(6, 3);
   CHECK(a3 + b3 == c3);
}

TEST_CASE("test fraction - fraction operator")
{
   Fraction a(4, 4);
   Fraction b(3, 4);
   Fraction c(4, 16);
   CHECK(a - b == c);
   Fraction a2(9, 12);
   Fraction b2(1, 4);
   Fraction c2(4, 8);
   CHECK(a2 - b2 == c2);
   Fraction a3(1, 2);
   Fraction b3(1, 6);
   Fraction c3(1, 3);
   CHECK(a3 - b3 == c3);
   Fraction a4(1, 3);
   Fraction b4(1, 9);
   Fraction c4(2, 9);
   CHECK(a4 - b4 == c4);
}
TEST_CASE("test fraction - float operator")
{
   Fraction a(5, 4);
   float b = 0.25;
   Fraction c(2, 2);
   CHECK(a - b == c);
}

TEST_CASE("test float - fraction operator")
{
   Fraction a(1, 2);
   float b = 6.5;
   Fraction c(6, 1);
   CHECK(b - a == c);
}

TEST_CASE("Test fraction * fraction operator")
{
   Fraction a(1, 2);
   Fraction b(1, 4);
   Fraction c(1, 8);
   CHECK(a * b == c);
   Fraction a2(2, 5);
   Fraction b2(3, 5);
   Fraction c2(6, 25);
   CHECK(a2 * b2 == c2);
   Fraction a3(12, 16);
   Fraction b3(2, 5);
   Fraction c3(6, 20);
   CHECK(a3 * b3 == c3);
   Fraction a4(4, 1);
   Fraction b4(3, 3);
   Fraction c4(12, 3);
   CHECK(a4 * b4 == c4);
}
TEST_CASE("Test float * fraction operator")
{
   Fraction a(1, 4);
   float b = 4.5;
   Fraction c(9, 8);
   CHECK(b * a == c);
}

TEST_CASE("Test fraction * float operator")
{
   Fraction a(1, 4);
   float b = 4.5;
   Fraction c(9, 8);
   CHECK(a * b == c);
}

TEST_CASE("Test fraction / float operator")
{
   Fraction a(-2, 6);
   Fraction b(3, 4);
   Fraction c(-8, 18);
   CHECK(a / b == c);
   Fraction a2(1, 2);
   Fraction b2(9, 6);
   Fraction c2(6, 18);
   CHECK(a2 / b2 == c2);
   Fraction a3(-5, 3);
   Fraction b3(-9, 8);
   Fraction c3(-40, -27);
   CHECK(a3 / b3 == c3);
   Fraction a4(3, 7);
   Fraction b4(2, 10);
   Fraction c4(30, 14);
   CHECK(a4 / b4 == c4);
}
TEST_CASE("Test float / fraction operator")
{
   Fraction a(1, 4);
   float b = 4.5;
   Fraction c(18, 1);
   CHECK(b / a == c);
}

TEST_CASE("Test fraction / float operator")
{
   Fraction a(1, 4);
   float b = 4.5;
   Fraction c(1, 18);
   CHECK(a / b == c);
}

TEST_CASE("Test the ++ operator")
{
   Fraction a(1, 3);
   a++;
   Fraction b(4, 3);
   CHECK(a == b);
}

TEST_CASE("Test the -- operator")
{
   Fraction a(1, 3);
   a--;
   Fraction b(-2, 3);
   CHECK(a == b);
}

TEST_CASE("Test the >= operator")
{
   Fraction a(1, 2);
   Fraction b(3, 4);
   CHECK(b >= a);
}
TEST_CASE("Test the <= operator")
{
   Fraction a(1, 2);
   Fraction b(3, 4);
   CHECK(a >= a);
   CHECK(a <= b);
}