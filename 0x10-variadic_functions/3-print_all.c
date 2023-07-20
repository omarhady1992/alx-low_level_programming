#include "variadic_functions.h"

/**
 * format_char - print a char
 * @separator: separator
 * @ap: argument pointer
*/

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - print an int
 * @separator: separator
 * @ap: argument pointer
*/

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - print a float
 * @separator: separator
 * @ap: argument pointer
*/

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}


/**
 * format_string - print a string
 * @separator: separator
 * @ap: argument pointer
*/

void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s%s", separator, str);
}


/**
 * print_all - print all arguments
 * @format: format string
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
