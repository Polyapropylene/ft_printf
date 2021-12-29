#include "ft_printf.h"

int	print_x(unsigned long long i)
{
	int	len;
	char	*str;
	
	len = 0;
	str = ft_utoa_base(i, 16);
	len += print_string(str);
	free(str);
	return (len);
}

int	print_X(unsigned long long i)
{
	int	len;
	char	*str;

	len = 0;
	i = 0;
	str = ft_utoa_base(i, 16);
	while (*str)
	{
		if (*str >= 'a' && *str <= 'f')
			*str -= 32;
		str++;
	}
	len += print_string(str);
	free(str);
	return (len);
}