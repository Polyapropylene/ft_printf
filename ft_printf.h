#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);

int		print_string(char *s);

int		print_char(char c);

int		print_number(long n);

int		print_unsigned_int(unsigned int n);

int		print_x(unsigned long i);

int		print_X(unsigned long i);

char	*ft_itoa(int n, int base);

char	*ft_utoa_base(unsigned long long n, int base);

char	*ft_strdup(const char *s1);

size_t	ft_strlen(const char *c);

int	count_unsigned_num(unsigned long long n, int base);

int		count_num(int n, int base);

#endif
