#include <stdio.h>

void before_main() __attribute__((constructor));

/**
 * before_main - Main Function that is executed before the principal main.
 * Return Nothing.
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
