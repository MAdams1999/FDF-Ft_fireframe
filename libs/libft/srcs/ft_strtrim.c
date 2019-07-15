/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:37:33 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 15:12:05 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This function trims whitespaces from the start
**and end of the guven string ( ' ', \n, \t).
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const	*one;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	one = s + ft_strlen(s) - 1;
	while (*one == ' ' || *one == '\t' || *one == '\n')
		one--;
	return (ft_strsub(s, 0, one - s + 1));
}
/*
**int		main(void)
**{
**	char			str1[] = "  \t    \t\nBon\t \njour\t\n  \n     ";
**	char			str2[] = "Bonjour";
**	char			str3[] = "  \t\t\t   ";
**	char			*r;
**
**	ft_strtrim(NULL);
**	r = ft_strtrim(str1);
**	if (strcmp(r, "Bon\t \njour"))
**	{
**		write(1, "It doesn't work\n", 16);
**		free(r);
**		return (0);
**	}
**	free(r);
**	r = ft_strtrim(str2);
**    if (strcmp(r, "Bonjour") || (str2 == r))
**    {
**        write(1, "It doesn't work\n", 16);
**		free(r);
**        return (0);
**    }
**    free(r);
**	r = ft_strtrim(str3);
**    if (strcmp(r, "") || (str3 == r))
**    {
**        write(1, "It doesn't work\n", 16);
**		free(r);
**       return (0);
**    }
**    free(r);
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
