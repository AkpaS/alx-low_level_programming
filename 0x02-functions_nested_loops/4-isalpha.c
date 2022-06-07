#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function checks whether a character is an alphabet or not
 * 
 * @c character
 * Return: 0 0r 1
 */

int _isalpha(int c);
{
    if(isalpha(c) || islower(c))
        return (1);
    else
        return (0); 
}