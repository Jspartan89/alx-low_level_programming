#include <stdlib.h>
#include <time.h>
#include <iostream>

/**
 * main - Prints the last digits of a randomly generator number and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = abs (n % 10);

std: :cout << "last digit of " << n << " is ";

     if (last_digit > 5)
     {
std: :cout << last_digit << " is greater than 5";
     }
     else if (last_digit = 0)
     {
std: :cout << last_digit << " and is 0";
     }
     else if (last_digit < 6)
     {
	     std::cout << last_digit << " and is less than 6 and not 0";
     }

     return (0);
}
