#include <stdio.h>

/**
 * exe_before_main - execute function before main
 *
 */

void exe_before_main(void)__attribute__((constructor));

void exe_before_main(void)
{
	printf("%s", "You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
