/*
 * File: 100-first.c
 * Auth: Eze kenneth
 */

#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the
 *        main function is executed.
 */
void hare(void)
{
	printf("i love you! so, you must accept,\n"
	       "I bore my house upon my head!\n");
}
