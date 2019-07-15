/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:13:46 by madams            #+#    #+#             */
/*   Updated: 2019/07/12 13:55:50 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** "fdf.h" for t_map type and percentage()
** "colors.h" for all the COLOR macros.
*/

#include "fdf.h"
#include "colors.h"

/*
** Get color from default palette. The color will depend on the
** alltitude.
*/

int	default_color(int a, t_map *map)
{
	double	percentage;

	percentage = percent(map->a_min, map->a_max, a);
	if (percentage < 0.2)
		return (COLOR_SCARLET);
	else if (percentage < 0.4)
		return (COLOR_TIGER);
	else if (percentage < 0.6)
		return (COLOR_FIRE_BRICK);
	else if (percentage < 0.8)
		return (COLOR_ELECTRIC);
	else
		return (COLOR_AZURE);
}
/*
** Get light for color. Result depends on point position.
** This function is needed to create linear gradient.
*/

int	get_light(int start, int end, double percentage)
{
	return ((int)((1 - percentage) * start + percentage * end));
}

/*
** Get color. Result depends on point position.
** This function is needed to create linear gradient.
*/

int	get_color(t_point current, t_point start, t_point end, t_point delta)
{
	int		red;
	int		green;
	int		blue;
	double	percentage;

	if (current.color == end.color)
		return (current.color);
	if (delta.x > delta.y)
		percentage = percent(start.x, end.x, current.x);
	else
		percentage = percent(start.y, end.y, current.y);
	red = get_light((start.color >> 16) & 0xFF,
					(end.color >> 16) & 0xFF,
					percentage);
	green = get_light((start.color >> 8) & 0xFF,
					(end.color >> 8) & 0xFF,
					percentage);
	blue = get_light(start.color & 0xFF,
					end.color & 0xFF,
					percentage);
	return ((red << 16) | (green << 8) | blue);
}
