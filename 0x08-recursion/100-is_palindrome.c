#include "main.h"


/**
 * _strlen_recursion - This finds the length of a string.
 *
 * @s: the string pointer
 *
 * Return: the lenght og the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}




/**
  * pre_pad - check for a palindrome
  * @x: string pointer
  * @y: the first index
  * @z: the last index
  *
  * Return: 1 if palindrome or 0 if not
  */

int pre_pad(char *x, int y, int z)
{
	if (y == z)
		return (1);
	if (y == z - 1)
		return (x[y] == x[z]);
	if (x[y] != x[z])
		return (0);
	return (pre_pad(x, y + 1, z - 1));

}

/**
  * is_palindrome - This searches if a string is palindrome or not
  *
  * @s: pointer to string.
  *
  * Return: 1 if palindrome or 0 if not.
  */
int is_palindrome(char *s)
{
	int c;

	c = _strlen_recursion(s);
	if (c == 0 || *s != s[c - 1])
		return (0);
	return (pre_pad(s, 0, c - 1));
}
