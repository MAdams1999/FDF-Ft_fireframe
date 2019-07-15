/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:18:00 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:21:54 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char *scrap;

	scrap = dest;
	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = *src;
	return (scrap);
}
