/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:17:53 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:17:19 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*mc;
	char	*bm;

	if (dst == src)
		return (dst);
	bm = (char *)dst;
	mc = (char *)src;
	if (src <= dst)
	{
		bm += len - 1;
		mc += len - 1;
		while (len--)
			*bm-- = *mc--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
