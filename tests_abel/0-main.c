#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len;

    /* Test 1: Null format string */
    len = printf(NULL);
    printf("Test 1 (NULL format string): Return value = %d\n", len);

    /* Test 2: Invalid specifier */
    len = printf("This is an invalid specifier: %k\n");
    printf("Test 2 (Invalid specifier): Return value = %d\n", len);

    /* Test 3: Missing arguments */
    len = printf("Missing argument: %c %s\n", 'H');
    printf("Test 3 (Missing arguments): Return value = %d\n", len);

    /* Test 4: Valid input for comparison */
    len = printf("Valid input: %c %s %%\n", 'H', "Hello");
    printf("Test 4 (Valid input): Return value = %d\n", len);

    return (0);
}
