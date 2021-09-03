#include "Prime.h"
#include <cmath>
Prime::Prime()
{
	this->value = 2;
}

void Prime::setValue(int value) {
	this->value = value;
}
// -установить число

void Prime::setSieveSize(int value) {
	if (value > 2) this->sieve_size = value;
}

int Prime::getValue() {
	return this->value;
}
// -возвращение установленного числа.

int Prime::getSieveSize() {
	return this->sieve_size;
}

bool Prime::isValid() {
	if (this->value < 2) return false;
	double root = sqrt(this->value);
	for (int i = 2; i < root; i++)
	{
		if (this->value % i != 0) continue;
		else return false;
	}
	return true;
}
// -проверка, действительно ли установленное число простое

bool Prime::checkPrime(int number) {
	if (number < 2) return false;
	double root = sqrt(number);
	for (int i = 2; i < root; i++)
	{
		if (number % i != 0) continue;
		else return false;
	}
	return true;
}
// -проверка переданного числа на простоту

int Prime::countBetween(Prime& number) {
	int* sieve = sieveOfEratosphenes();
	int amount(0), lesser(min(this->value, number.value)), greater(max(this->value, number.value));
	for (int i = lesser + 1; i < greater; i++)
	{
		if (sieve[i] != 0) amount++;
	}
	delete[] sieve;
	return amount;
}
// -подсчет количества простых чисел между установленным и переданным

Prime Prime::nextPrime() {
	int* sieve = sieveOfEratosphenes();
	Prime next_number;
	for (int i = this->value + 1; i < this->sieve_size; i++)
	{
		if (sieve[i] != 0) {
			next_number.value = sieve[i];
			delete[] sieve;
			return next_number;
		}
	}
	delete[] sieve;
	return next_number;
}
// -возвращение простого числа, расположенного следом за установленным

int* Prime::sieveOfEratosphenes() {
	if (this->sieve_size < 3) return nullptr;
	int* simple_table = new int[this->sieve_size]{0};
	for (int i = 2; i < this->sieve_size; i++)
	{
		simple_table[i] = i;
	}
	for (int i = 2; i < this->sieve_size; i++)
	{
		if (simple_table[i] > 0)
		{
			for (int j = 2 * i; j < this->sieve_size; j += i) {//обнуляем все числа, кратные данному
				simple_table[j] = 0;
			}
		}
	}
	return simple_table;
}

int Prime::max(int first, int second) {
	if (first > second) return first;
	else return second;
}

int Prime::min(int first, int second) {
	if (first < second) return first;
	else return second;
}

