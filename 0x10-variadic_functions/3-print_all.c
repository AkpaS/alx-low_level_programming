#include "variadic_functions.h"

/**
 * print_all - A function that prints anything
 *
 * @format: A list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int x;
	char *ceis;

	x = 0;

	va_start(ap, format);
	while (format && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				ceis = va_arg(ap, char*);

				if (format[x] == '\0')
				{
					printf("(nil)");
					break;
				}
				printf("%s", ceis);
				break;
			default:
				x++;
			continue;
		}
		if (format[x + 1] != '\0' && format)
			printf(", ");
		x++;
	}
	va_end(ap);
	printf("\n");
}
