#include "ft_printf.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	print_string(char *s)
{
	if (s == NULL)
		return (0);
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}
