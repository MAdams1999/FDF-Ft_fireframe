/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:49:20 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:14:54 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list*elem))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst);
		lst = lst->next;
	}
	return ;
}
/*
**static void	iterfunct(t_list *v)
**{
**	*(size_t*)v->content = *(size_t*)v->content + 1;
**}
**
**int		main(void)
**{
**	t_list	*begin;
**	size_t	i;
**	size_t	j;
**
**	i = 1;
**	j = 2;
**	begin = ft_lstnew(&i, sizeof(size_t));
**	ft_lstiter(begin, iterfunct);
**	if (*(size_t*)begin->content != 2)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	if (*(size_t*)begin->next->content != 3)
**	{
**		write(1, "It doesn't work\n", 16);
**		return (0);
**	}
**	free(begin->next);
**	free(begin);
**	write(1, "It works\n", 9);
**	return (1);
**}
*/
