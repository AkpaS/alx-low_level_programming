#include "main.h"
include <ctype.h>

/**
 * @_isalpha - function checks whether a character is an alphabet or not
 * 
 * @c character
 * @return int 
 */

int _isalpha(int c);
{
    if(isalpha(c) || _islowe(c) )
        return (1);
    else
        return (0); 
}