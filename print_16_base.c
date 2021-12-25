#include "ft_printf.h"

int	print_x(unsigned long i)
{
	int	len;

	len = 0;
	/*if (i < 0)
	{
		len += print_char('-');
		i = -i;
	}*/
	if (i >= 0 && i <= 9)
		len += print_char(i + 48);
	if (i > 9 && i < 16)
		len += print_char(i + 87);
	if (i >= 16)
	{
		len += print_x(i / 16);
		len += print_x(i % 16);
	}
	return (len);
}

int	print_X(unsigned long i)
{
	int	len;

	len = 0;
	if (i <= 9)
		len += print_char(i + 48);
	if (i > 9 && i < 16)
		len += print_char(i + 55);
	if (i >= 16)
	{
		len += print_X(i / 16);
		len += print_X(i % 16);
	}
	return (len);
}