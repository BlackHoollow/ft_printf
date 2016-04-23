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
		return (str + block_size);
	}
}
