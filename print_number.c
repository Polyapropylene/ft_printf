#include "ft_printf.h"

int	count_num(int n)
{
	int	i;

	if (n <= 0)
		i = 1;
	if (n > 0)
		i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	print_number(int n)
{
	char	c;

	c = n + '0';
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		 n = -n;
		 write(1, "-", 1);
	}
	 if (n >= 10)
	{
		 print_number(n / 10);
		 print_number(n % 10);
	}
	 else
		 write(1, &c, 1);
	return (count_num(n));
}

int	print_unsigned_int(unsigned int n)
{
	char	c;

	c = n + '0';
	 if (n >= 10)
	{
		 print_number(n / 10);
		 print_number(n % 10);
	}
	 else
		 write(1, &c, 1);
	return (count_num(n));
}
