#include "main.h"
/**
  *_memset - This fills memory with a constant byte.
  *
  *@s: pointer .
  *@b: the constant byte.
  *@n: bytes of the memory
  *
  *Return: pointer to memory area s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
