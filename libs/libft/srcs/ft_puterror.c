/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 10:55:39 by madams            #+#    #+#             */
/*   Updated: 2019/07/11 10:21:13 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string msg to the sandard output followed by an exit of the
** program with a custom return value.
*/

void	*ft_puterror(char *msg, int ret)
{
	ft_putendl(msg);
	exit(ret);
}
