/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:27:25 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:19:40 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			i;
	short		one;
	int			j;

	one = (n < 0) ? 2 : 1;
	i = 1;
	j = 1;
	while ((n / j / 10) != 0 && ++i)
		j *= 10;
	i = 0;
	if (one == 2 && (one = -1))
		ft_putchar_fd('-', fd);
	while (j != 0)
	{
		ft_putchar_fd((char)((int)n / j * one + 48), fd);
		n %= j;
		j /= 10;
	}
}
