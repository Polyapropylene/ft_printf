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
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		 n = -n;
		 print_number('-');
	}
	 if (n >= 10)
	{
		 print_number(n / 10);
		 print_number(n % 10);
	}
	 else
		 print_number(n + '0');
	return (count_num(n));
}
