/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:57:38 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:14:03 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	new->next = *alst;
	*alst = new;
	return ;
}
/*
**int	main(void)
**{
**	t_list	*begin;
**	t_list	*add;
**	t_list	*tmp;
**	size_t	v;
**	v = 1;
**	begin = ft_lstnew(&v, sizeof(size_t));
**	tmp = begin;
**	add = ft_lstnew(&v, sizeof(size_t));
**	ft_lstadd(&begin, add);
**	if (begin != add)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (begin->next != tmp)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	free(begin->next);
**	free(begin);
**	write(1, "It works\n", 9);
**	return (0);
**}
*/
