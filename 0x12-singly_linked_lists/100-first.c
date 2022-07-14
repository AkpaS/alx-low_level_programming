#include "lists.h"

/**
 * bf_main - A function that prints a string before main func is extecuted
 */

void __attribute__((constructor)) bf_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
