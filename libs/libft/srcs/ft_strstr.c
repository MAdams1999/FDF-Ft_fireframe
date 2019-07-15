/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:28:24 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 15:11:26 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hstk, const char *ndle)
{
	int	hi;
	int	ni;
	int	len;

	hi = 0;
	ni = 0;
	len = ft_strlen(ndle);
	if (!len)
		return ((char *)hstk);
	while (hstk[hi])
	{
		ni = 0;
		while (ndle[ni] == hstk[ni + hi])
		{
			if (ni++ == len - 1)
				return ((char *)hstk + hi);
		}
		hi++;
	}
	return (NULL);
}
