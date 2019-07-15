/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:36:28 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:24:41 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	b;
	char	*sep;

	if (s == NULL || f == NULL)
		return (NULL);
	sep = ft_strnew(ft_strlen(s));
	if (sep == NULL)
		return (NULL);
	b = 0;
	while (s[b] != '\0')
	{
		sep[b] = (*f)(b, s[b]);
		b++;
	}
	return (sep);
}
