#include <iostream>
 double power(double base, int exp )
 {
     double result = 1;
     for (int i =0; i < exp; i++)
     {
         result = result * base;
     }
     return result;
 }

int main()
 {
     double base;
     int exp;
     std::cout << "Enter the base:";
     std::cin >> base;
     std::cout << "Base: " << base << std::endl;
     std::cin >> exp;
     std::cout << "power: " << exp << std::endl;
     double res = power( base, exp);
     std::cout << "the result: "<< res << std::endl;
 }
