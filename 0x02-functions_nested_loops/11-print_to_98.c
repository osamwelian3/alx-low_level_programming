

/*
 * File: 11-print_to_98.c
 * Auth: Michael Ndungu Kamotho
 */

#include "main.h"

/**
 * 11-print_to_98.c - prints all natural numbers from n to 98 followed by a line
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */

void print_to_98(int n){
	int count;
	int number = n;

	for(count = n; count <99; count++){
	   _putchar(number);
 	   number++;
	   _putchar(',');

	}
	putchar('\n');

}
