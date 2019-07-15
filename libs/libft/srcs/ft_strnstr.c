/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:25:09 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 15:09:17 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hi;
	size_t	ni;
	size_t	length;

	hi = 0;
	ni = 0;
	length = ft_strlen(needle);
	if (!length)
		return ((char *)haystack);
	while (len && haystack[hi])
	{
		ni = 0;
		if (len < length)
			return (NULL);
		while ((needle[ni] == haystack[ni + hi]))
		{
			if (ni++ == length - 1)
				return ((char *)haystack + hi);
		}
		len--;
		hi++;
	}
	return (NULL);
}
