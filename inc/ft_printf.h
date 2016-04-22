#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <libft.h>

/*
**	ft_printf.c
*/

int		ft_printf(char *str, ...);
char	*do_things(char *str, va_list ap, int *ret);

#endif
