#include <stdio.h>

/**
 * main -print alpabetics 
 * Return - always sucesss
 *
 */
int main (void) {
	char c;

	for(c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return(0);
}

