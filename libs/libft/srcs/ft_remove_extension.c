/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_extension.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:01:26 by madams            #+#    #+#             */
/*   Updated: 2019/07/11 10:19:55 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Remove the extension (type) of a filename, returniong it's basename.
*/

char	*ft_remove_extension(char *filename)
{
	char	*base_name;
	char	*dot;
	char	*sep;

	if (!filename)
		return (NULL);
	if (!(base_name = (char *)malloc(sizeof(char) * ft_strlen(filename) + 1)))
		return (NULL);
	ft_strcpy(base_name, filename);
	if ((dot = ft_strrchr(base_name, '.')))
	{
		if ((sep = ft_strrchr(base_name, '/')))
			(sep < dot) ? *dot = '\0' : *dot;
		else
			*dot = '\0';
	}
	return (base_name);
}
