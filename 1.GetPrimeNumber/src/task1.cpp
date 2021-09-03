#include <iostream>

unsigned int getPrime(unsigned int n) {
    int* a = new int[5000];
    int number = 0;
    for (int i = 0; i < 5000; i++)
    {
        a[i] = i;
    }
    a[1] = 0;
    for (int p = 2; p < 5000; p++)
    {
        if (a[p] != 0)
        {
            for (int j = p * p; j < 5000; j += p) {//обнуляем все числа, кратные данному
                a[j] = 0;
            }
        }
    }
    for (int i = 0; i < 5000 && n > 0; i++) {
        if (a[i] != 0) {
            n--;
            number = a[i];
        }
    }
    return number;
}
