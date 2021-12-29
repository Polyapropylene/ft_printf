#include "ft_printf.h"

int	print_number(long n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_itoa(n, 10);
	i += print_string(str);
	free(str);
	return (i);
}

int	print_unsigned_int(unsigned int n)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_utoa_base(n, 10);
	i += print_string(str);
	free(str);
	return (i);
}
