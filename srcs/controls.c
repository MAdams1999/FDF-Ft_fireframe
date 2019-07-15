/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:25:51 by madams            #+#    #+#             */
/*   Updated: 2019/07/12 13:56:19 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** "mlx.h" for mlx_hook()
** "fdf.h" for key_press(), close(), mouse_press(), mouse_release() and
** mouse_move()
** <stdlib.h> for exit()
*/

#include "mlx.h"
#include "fdf.h"
#include <stdlib.h>

/*
** Close window with 'ESC'
*/

int		closer(void *param)
{
	(void)param;
	exit(0);
}

/*
** Connect functions-controllers to window
*/

void	setup_controls(t_fdf *fdf)
{
	mlx_hook(fdf->win, 2, 0, key_press, fdf);
	mlx_hook(fdf->win, 17, 0, close, fdf);
	mlx_hook(fdf->win, 4, 0, mouse_press, fdf);
	mlx_hook(fdf->win, 5, 0, mouse_release, fdf);
	mlx_hook(fdf->win, 6, 0, mouse_move, fdf);
}
