/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:32:17 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:25:02 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	unsigned int b;
	unsigned int m;

	b = 0;
	while (dest[b])
		b++;
	m = 0;
	while (src[m] && m < n)
	{
		dest[b + m] = src[m];
		m++;
	}
	dest[b + m] = '\0';
	return (dest);
}
