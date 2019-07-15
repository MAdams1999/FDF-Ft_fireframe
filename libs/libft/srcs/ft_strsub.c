/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:06:17 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 15:11:47 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This function cuts a string
**out of another string
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char	*)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
**int		main(void)
**{
**	char		*ret;
**	char		str[] = "*Hello*";
**
**	ft_strsub(NULL, 0, 0);
**	ft_strsub(NULL, 1, 0);
**	ft_strsub(NULL, 1, 1);
**	ft_strsub(NULL, 0, 1);
**	ret = ft_strsub(str, 1, 5);
**	if (strcmp(ret, "Hello") != 0)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	ret = ft_strsub(str, 3, 1);
**    if (strcmp(ret, "l") != 0)
**    {
**		write(1, "It doesn't work\n", 16);
**        return (0);
**    }
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
