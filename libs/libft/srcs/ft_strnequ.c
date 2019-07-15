/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:57:40 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 15:08:09 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}
/*
**int		main(void)
**{
**	int			ret;
**
**	ft_strnequ(NULL, NULL, 0);
**	ft_strnequ(NULL, NULL, 1);
**	ft_strnequ(NULL, "", 1);
**	ft_strnequ("", NULL, 1);
**	ret = 0;
**	if ((ret = ft_strnequ("abc", "abc", 2)) != 1)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strnequ("cba", "abc", 2)) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strnequ("abc", "cba", 2)) != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strnequ("abc", "abd", 2)) != 1)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if ((ret = ft_strnequ("", "", 3)) != 1)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
