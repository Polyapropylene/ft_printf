#include "ft_printf.h"

int	print_x(unsigned int n)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_utoa_base(n, 16);
	len += print_string(str);
	free(str);
	return (len);
}

int	print_upper_x(unsigned int n)
{
	int		len;
	char	*str;
	int		i;

	len = 0;
	i = 0;
	str = ft_utoa_base(n, 16);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'f')
			str[i] -= 32;
		i++;
	}
	len += print_string(str);
	free(str);
	return (len);
}

int	print_p(unsigned long n)
{
	int		len;
	char	*str;

	len = 0;
	len += print_string("0x");
	str = ft_utoa_base(n, 16);
	len += print_string(str);
	free(str);
	return (len);
}
