/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:02:51 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:21:21 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Strclr clears a string.
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	int a;

	a = 0;
	if (s != NULL)
		while (s[a])
			s[a++] = '\0';
}
/*
**int		main(void)
**{
**	int			i;
**	char		str[] = "Hello";
**
**	i = 0;
**	ft_strclr(NULL);
**	ft_strclr(str);
**	while (i < 6)
**	{
**		if (str[i] != '\0')
**		{
**			write(1, "It doesn't work\n", 16);
**			return (0);
**		}
**	i = i + 1;
**	}
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
