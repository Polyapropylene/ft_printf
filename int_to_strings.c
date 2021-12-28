#include "ft_printf.h"

static char	*int_to_char(int n, char *str, int base)
{
	int	i;

	i = count_num(n, base);
	str[i] = 0;
	i--;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (i > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (str[0] != '-')
		str[i] = n % 10 + '0';
	return (str);
}

char	*ft_itoa(int n, int base)
{
	char	*str;
	int		i;

	i = count_num(n, base);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str = int_to_char(n, str, base);
	return (str);
}

static char	*uns_int_to_char(unsigned long long n, char *str, int base, int i)
{
	str[i] = '\0';
	i--;
	while(n)
	{
		if ((n % base) >= 10)
			str[i] = ((n % 10) - 10) + 'a';
		else
			str[i] = n % 10 + '0';
		n = n / base;
		i--;
	}
	return(str);
}

char	*ft_utoa_base(unsigned long long n, int base)
{
	char	*str;
	int		i;

	 //if (n < 0)
	//	 n = 4294967295 + n;
	i = count_num(n, base);
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	return (uns_int_to_char(n, str, base, i));
}
