/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:03:43 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:21:35 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		++s1;
		++s2;
		if (*s1 == 0 && *s2 == 0)
			return (0);
	}
	return (*(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1);
}
/*
**int		main(void)
**{
**	write(1, "The two numbers should match in all 3 cases\n", 44);
**	printf("%d\n", ft_strcmp("cba", "abc"));
**	printf("%d\n", strcmp("cba", "abc"));
**	printf("%d\n", ft_strcmp("a", "abcde"));
**	printf("%d\n", strcmp("a", "abcde"));
**	printf("%d\n", ft_strcmp("abc", "abc"));
**	printf("%d\n", strcmp("abc", "abc"));
**}
*/
