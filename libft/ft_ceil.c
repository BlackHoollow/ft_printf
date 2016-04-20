/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ceil.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaynac <gsaynac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 17:59:42 by gsaynac           #+#    #+#             */
/*   Updated: 2015/03/01 22:38:41 by gsaynac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double		ft_ceil(double x)
{
	return (x == (int)x ? x : (int)x + 1);
}