#ifndef PSUTILS_H
#define PSUTILS_H

#include <sys/types.h>

/* PGETS - (overflow) protected fgets
 *  char *str		- pointer to string
 *  ssize_t siz - size of str in bytes
 *
 *  Note:		Because the last char is a terminating '\0', the str will at most
 *						contain siz-1 chars.
 */
ssize_t pgets(char *str, ssize_t siz);

/* PGETC - (overflow) protected getchar
 *  char *c - pointer to char
 */
void pgetc(char *c);

/* PGETD - (overflow) protected get int
 *  char *d - pointer to int
 *
 *  Return: 0 - Success
 *					1 - Overflow, *d is undefined
 *					2 - Invalid input, *d is undefined
 *
 *	Note:		If just a dash '-' is inserted, *d is set to -1.
 *					If invalid chars are trailing a valid expression, the
 *						trailing characters are dropped.
 */
int pgetd(int *d);

#endif
