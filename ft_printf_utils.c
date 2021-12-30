#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	count_unsigned_num(unsigned long long n, int base)
{
	int	i;

	i = 0;
	while (n)
	{
		i++;
		n = n / base;
	}
	return (i);
}

int	count_num(int n, int base)
{
	int	i;

	if (n <= 0)
		i = 1;
	if (n > 0)
		i = 0;
	while (n != 0)
	{
		n = n / base;
		i++;
	}
	return (i);
}
