/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:50:47 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:25:27 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function is the same as strcmp
** but to n characters.
** (!us1[i]) is null byte/end of string.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *const	us1 = (const unsigned char *)s1;
	const unsigned char *const	us2 = (const unsigned char *)s2;
	size_t						i;

	i = (size_t)0;
	while (i < n)
	{
		if (us1[i] < us2[i])
			return (-1);
		else if (us1[i] > us2[i])
			return (1);
		else if (!us1[i])
			return (0);
		i++;
	}
	return (0);
}
/*
**int		main(void)
**{
**	write(1, "Numbers must match in all instances\n", 36);
**	printf("%d\n", strncmp("cba", "abc", 1));
**	printf("%d\n", ft_strncmp("cba", "abc", 1));
**	printf("%d\n", strncmp("abc", "abc", 3));
**	printf("%d\n", ft_strncmp("abc", "abc", 3));
**}
*/
