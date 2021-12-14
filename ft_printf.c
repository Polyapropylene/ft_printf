#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int	i;

	i = 0;
	if (!input || *input == '\0')
		return (0);
	va_start (args, input);
	va_end (args);
	return (i);
}

#include <stdio.h>

int	main()
{
	char	c;
	char	*str;
	int	i;

	printf("%c\n", c);
	ft_printf("%c\n", c);
	printf("%s\n", str);
	ft_printf("%s\n", str);
	printf("%d\n", i);
	ft_printf("%d\n", i);
	printf("%d%s\n", i, str);
	ft_printf("%d%s\n", i, str);

}