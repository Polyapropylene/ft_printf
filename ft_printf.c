#include "ft_printf.h"
#include <limits.h>

int	parse_format(va_list argp, char *format)
{
	int	result;

	result = 0;
		if (*format == 'c')
			result += print_char(va_arg(argp, int));
		else if (*format == 's')
			result += print_string(va_arg(argp, char *));
		else if (*format == 'd' || *format == 'i')
			result += print_number(va_arg(argp, int));
		else if (*format == 'u')
			result += print_unsigned_int(va_arg(argp, unsigned int));
		else if (*format == 'x')
			result += print_x(va_arg(argp, unsigned long int));
		else if (*format == 'X')
			result += print_X(va_arg(argp, unsigned long int));
		else if (*format == '%')
			result += print_char('%');
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	argp;
	int	res;
	int	i;

	res = 0;
	i = 0;
	if (!format || *format == '\0')
		return (0);
	va_start (argp, format);
	while (*format)
	{
		if (*format != '%')
			res += write(1,format, 1);
		if(*format == '%')
		{
			format++;
			res += parse_format(argp, (char *)format);
		}
		format++;
	}
	va_end (argp);
	return (res);
}

#include <stdio.h>

/*int	main()

{
	// char	c;
	// char	*str;
	// unsigned int		i;

	// c = 'b';
	// i = 8948834;
	// str = "Hello world";
	// printf(" %lx \n", 4294967295);
	// ft_printf(" %lx \n", 4294967295);
	// printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, UOLNG_MAX, 0, -42);
	// ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("%u\n", -1000);
	// ft_printf("%u\n", -1000);
	printf(" %c %c %c \n", '2', '1', 0);
	ft_printf(" %c %c %c \n", '2', '1', 0);
	// printf("%%\n");
	// ft_printf("%%\n")
}*/