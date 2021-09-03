#ifndef PRIME_H
#define PRIME_H
class Prime
{
private:
	int value = 2;
	int sieve_size = 1000000;
	int* sieveOfEratosphenes();
public:
	Prime();
	void setValue(int);
	void setSieveSize(int);
	int getValue();
	int getSieveSize();
	bool isValid();// checks if this number is prime
	bool checkPrime(int);// checks if number is prime
	int countBetween(Prime&);// calculate prime numbers between these two, without them
	Prime nextPrime();// returns next prime number
	int max(int, int);
	int min(int, int);

};
#endif