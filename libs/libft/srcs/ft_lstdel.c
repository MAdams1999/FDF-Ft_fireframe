/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:44:03 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:14:20 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(alst, del);
}
/*
**void	freefunct(void *d, size_t s)
**{
**	free(d);
**	(void)s;
**}
**
**int	main(void)
**{
**	t_list	*begin;
**	size_t	m;
**
**	m = 1;
**	begin = ft_lstnew(&m, sizeof(void *));
**	begin->next = ft_lstnew(&m, sizeof(void *));
**	begin->next->next = ft_lstnew(&m, sizeof(void *));
**	ft_lstdel(&begin, freefunct);
**	if (begin != NULL)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	write(1, "It works\n", 16);
**	return (0);
**}
*/
