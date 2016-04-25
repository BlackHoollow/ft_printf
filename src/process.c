#include <ft_printf.h>

char			*process(char *str, t_printf *p)
{
	int		block_size;

	block_size = 0;
	if (!(block_size = parse(str, p)))
	{
		flush("%", p, false);
		return (str);
	}
	else
	{
		if (p->converter == 's')
			flush(va_arg(p->ap, char *), p, false);
		else if (p->converter == 'd' || p->converter == 'i')
			flush(ft_itoa(va_arg(p->ap, long long int)), p, true);
		else if (p->converter == '%')
			flush("%", p, false);
		else if (p->converter == 'c')
			flush(ft_memset(ft_strnew(2), va_arg(p->ap, int), 1), p , true);
		return (str + block_size);
	}
}
