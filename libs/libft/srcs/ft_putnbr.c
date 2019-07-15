/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:26:55 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:19:10 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int			i;
	short		take;
	int			replace;

	take = (n < 0) ? 2 : 1;
	i = 1;
	replace = 1;
	while ((n / replace / 10) != 0 && ++i)
		replace *= 10;
	i = 0;
	if (take == 2 && (take = -1))
		ft_putchar('-');
	while (replace != 0)
	{
		ft_putchar((char)((int)n / replace * take + 48));
		n %= replace;
		replace /= 10;
	}
}
