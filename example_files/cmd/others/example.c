#include <stdio.h>
#include <time.h>
 
// Guess the number: example taken from http://www.rosettacode.org/
int main(void)
{
    int n;
    int g;
    char c;
 
    srand(time(NULL));
    n = 1 + (rand() % 10);
 
    puts("I'm thinking of a number between 1 and 10.");
    puts("Try to guess it:");
 
    while (1) {
        if (scanf("%d", &g) != 1) {
		/* ignore one char, in case user gave a non-number */
		continue;
	}
 
        if (g == n) {
	    puts("Correct!");
	    return 0;
	}
        puts("That's not my number. Try another guess:");
    }
}