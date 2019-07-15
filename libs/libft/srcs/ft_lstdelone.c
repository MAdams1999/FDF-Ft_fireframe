/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:39:59 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:14:37 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}
/*
**static void	freefunct(void *d, size_t s)
**{
**	free(d);
**	(void)s;
**}
**
**int		main(void)
**{
**	t_list	*begin;
**	size_t	m;
**
**	m = 1;
**	begin = ft_lstnew(&m, sizeof(void *));
**	begin->next = ft_lstnew(&m, sizeof(void *));
**	begin->next->next = ft_lstnew(&m, sizeof(void *));
**	ft_lstdelone(&begin->next->next, freefunct);
**	if (begin->next->next != NULL)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	ft_lstdelone(&begin->next, freefunct);
**	if (begin->next->next != NULL)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	ft_lstdelone(&begin, freefunct);
**	if (begin != NULL)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 9);
**	return (1);
**}
*/
