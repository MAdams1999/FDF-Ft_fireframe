/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_program_name.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 10:44:43 by madams            #+#    #+#             */
/*   Updated: 2019/07/08 10:48:14 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/*
** Get the name of the program (argv[0]).
*/

char	*ft_program_name(char const *argv0)
{
	char *name;

	name = (char *)argv0;
	while (*name && *name != '/')
		name += 1;
	if (!name)
		return ((char *)argv0);
	return (name + 1);
}
