/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:27:03 by madams            #+#    #+#             */
/*   Updated: 2019/07/15 10:06:23 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** "fdf.h" for t_coord_val type, t_map type, terminate() and pop()
** "libft.h" for ssize_t type ("libft.h" includes <string.h>),
** size_t ("libft.h" includes <string.h>) and ft_memalloc()
** "error.h" for ERR_CONV_TO_ARR macros
** <stdlib.h> for free()
*/

#include "fdf.h"
#include "../libs/libft/Includes/libft.h"
#include "error.h"
#include <stdlib.h>

/*
** Convert stack with t_coord_val elements (contains z value and color value)
** to array with z values and array with color values.
*/

void		stack_to_arrays(t_coord_val **coords_stack, t_map *map)
{
	t_coord_val	*coord;
	ssize_t		i;
	size_t		arr_size;

	arr_size = map->width * map->height * sizeof(int);
	if (!(map->coords_arr = (int *)ft_memalloc(arr_size)))
		terminate(ERR_CONV_TO_ARR);
	if (!(map->colors_arr = (int *)ft_memalloc(arr_size)))
		terminate(ERR_CONV_TO_ARR);
	i = map->width * map->height - 1;
	while ((coord = pop(coords_stack)) && i >= 0)
	{
		map->coords_arr[i] = coord->z;
		map->colors_arr[i] = coord->color;
		if (coord->z > map->a_max)
			map->a_max = coord->z;
		if (coord->z < map->a_min)
			map->a_min = coord->z;
		i--;
		free(coord);
	}
	map->z_range = map->a_max - map->a_min;
}
