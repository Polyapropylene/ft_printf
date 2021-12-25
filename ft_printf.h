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

int		print_unsigned_int(unsigned long n);

int		print_x(unsigned long i);

int		print_X(unsigned long i);

char	*ft_itoa(int n);

char	*ft_utoa(unsigned int n);

char	*ft_strdup(const char *s1);

size_t	ft_strlen(const char *c);

int		count_num(int n);

#endif
