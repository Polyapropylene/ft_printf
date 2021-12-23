#include "ft_printf.h"

int	print_number(long n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(n);
	i += print_string(str);
	free(str);
	return (i);
}

int	print_unsigned_int(unsigned long n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_utoa(n);
	i += print_string(str);
	free(str);
	return (i);
}
