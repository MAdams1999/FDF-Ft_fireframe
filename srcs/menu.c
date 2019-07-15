/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 13:35:05 by madams            #+#    #+#             */
/*   Updated: 2019/07/12 14:18:08 by madams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** "fdf.h" for t_fdf type
** "mlx.h" for mlx_string_put()
** "colors.h" for TEXT_COLOR
*/

#include "fdf.h"
#include "mlx.h"
#include "colors.h"

/*
** Print "How to Use" instruction.
*/

void	print_menu(t_fdf *fdf)
{
	int		y;
	void	*mlx;
	void	*win;

	y = 0;
	mlx = fdf->mlx;
	win = fdf->win;
	mlx_string_put(mlx, win, 65, y += 20, TXT_COLOR, "How to Use FDF");
	mlx_string_put(mlx, win, 15, y += 35, TXT_COLOR, "Zoom: Scroll or +/-");
	mlx_string_put(mlx, win, 15, y += 30, TXT_COLOR, "Move: Arrows");
	mlx_string_put(mlx, win, 15, y += 30, TXT_COLOR, "Flatten: </>");
	mlx_string_put(mlx, win, 15, y += 30, TXT_COLOR, "Rotate: Press & Move");
	mlx_string_put(mlx, win, 15, y += 30, TXT_COLOR, "Rotate:");
	mlx_string_put(mlx, win, 57, y += 25, TXT_COLOR, "X-Axis - 2/8");
	mlx_string_put(mlx, win, 57, y += 25, TXT_COLOR, "Y-Axis - 4/6");
	mlx_string_put(mlx, win, 57, y += 25, TXT_COLOR, "Z-Axis - 1(3)/7(9)");
	mlx_string_put(mlx, win, 15, y += 30, TXT_COLOR, "Projection of Map");
	mlx_string_put(mlx, win, 57, y += 25, TXT_COLOR, "ISO VIEW: T Key");
	mlx_string_put(mlx, win, 57, y += 25, TXT_COLOR, "Parallel VIEW: R Key");
}
