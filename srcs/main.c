/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:34:15 by madams            #+#    #+#             */
/*   Updated: 2019/07/12 14:36:03 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** "fdf.h" for t_map type, t_coord_val type, t_fdf type, terminate(),
**  map_init(), read_map(), fdf_init(), stack_to_arrays(), camera_init(),
**  draw() and setup_controls()
** "mlx.h" for mlx_loop()
** "error.h" for ERR_MAP macros, ERR_MAP_READING macros
**  and ERR_USAGE macros
** <error.h> for errno variable
** <fcntl.h> for open() and O_RDONLY flag
** <stdlib.h> for NULL macros
*/

#include "fdf.h"
#include "mlx.h"
#include "error.h"
#include <errno.h>
#include <fcntl.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int			fd;
	t_map		*map;
	t_coord_val	*coords_stack;
	t_fdf		*fdf;

	errno = 0;
	coords_stack = NULL;
	if (argc == 2)
	{
		if (!((fd = open(argv[1], O_RDONLY)) >= 0))
			terminate(ERR_MAP);
		map = map_init();
		if (read_map(fd, &coords_stack, map) == -1)
			terminate(ERR_MAP_READING);
		fdf = fdf_init(map);
		stack_to_arrays(&coords_stack, map);
		fdf->camera = camera_init(fdf);
		draw(fdf->map, fdf);
		setup_controls(fdf);
		mlx_loop(fdf->mlx);
	}
	terminate(ERR_USAGE);
	return (0);
}
