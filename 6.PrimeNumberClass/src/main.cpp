#include <iostream>
#include "Prime.h"

int main() {
    Prime num1, num2;
    num1.setValue(2);
    num2 = num1.nextPrime();          // в num2 устанавливается 3
    bool result = num1.checkPrime(17); // true
    num2.setValue(17);              // в num2 устанавливаем 17
    int count = num2.countBetween(num1); // count=5
    bool ans = num2.isValid();        // true
}