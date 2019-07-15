/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strhextoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 11:00:50 by madams            #+#    #+#             */
/*   Updated: 2019/07/05 11:01:57 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strhextoi(char *str)
{
	int i;
	int e;
	int hex;

	i = ft_strlen(str);
	e = 1;
	hex = 0;
	while (--i >= 0 && e <= 1048576)
	{
		if (ft_isdigit(str[i]))
			hex += (str[i] - '0') * e;
		else if ('a' <= str[i] && str[i] <= 'f')
			hex += (str[i] - 'a' + 10) * e;
		else if ('A' <= str[i] && str[i] <= 'F')
			hex += (str[i] - 'A' + 10) * e;
		e *= 16;
	}
	return (hex);
}
