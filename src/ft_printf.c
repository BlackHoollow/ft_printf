/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nromptea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/22 18:39:15 by nromptea          #+#    #+#             */
/*   Updated: 2016/04/23 13:00:16 by nromptea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

char	*do_things(char *str, va_list ap, int *ret)
{
	char	*tmp;

	tmp = str;
	ap = ap + 0;
	str = str + 1;
	*ret = *ret + 1;
	ft_putchar('\n');
	ft_putendl("didn't do anything lol");
	return (str);
}

int		ft_printf(char *str, ...)
{
	va_list	ap;
	int		ret;

	ret = 0;
	while (*str != '\0')
	{
		if (*str != '%')
		{
			ft_putchar(*str);
			ret++;
			str++;
		}
		else
		{
			str = do_things(str, ap, &ret);
		}
	}
	return (ret);
}
