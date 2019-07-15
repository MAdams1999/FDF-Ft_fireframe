/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:29:54 by madams            #+#    #+#             */
/*   Updated: 2019/06/20 14:15:15 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *sortie;

	if (lst)
	{
		sortie = f(lst);
		sortie->next = ft_lstmap(lst->next, f);
		return (sortie);
	}
	return (NULL);
}
