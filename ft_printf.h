#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	print_string(char *s);

int	print_char(char c);

int	print_number(int n);

int	print_unsigned_int(unsigned int n);

#endif
