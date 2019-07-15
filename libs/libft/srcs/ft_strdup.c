/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:48:31 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:22:23 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*cpy;
	size_t		len;

	len = ft_strlen(s1) + 1;
	cpy = (char *)malloc(len);
	if (!cpy)
		return (NULL);
	ft_memcpy(cpy, s1, len);
	return (cpy);
}
