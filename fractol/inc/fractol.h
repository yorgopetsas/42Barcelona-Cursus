/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:24:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/07/05 12:53:41 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// REMOVE  ----- LIBRARY FOR PRINTF() 
#include <stdio.h>

// LIBRARY FOR READ
#include <unistd.h>

// MATH LIBRARY
#include <math.h>

// MLX LIBRARY
#include "../inc/mlx/mlx.h"

// LIBRARY FOR MALLOC() AND ARGUMENTS PARSEMENT
#include <stdlib.h>

// MLX LIBRARY 
#include <mlx/mlx.h>

// IMAGE STRUCTS
typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct	s_mlx {
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		it_max;
	int		zoom;
	double	x1;
	double	y1;
	int		color;
}				t_mlx;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	yz_print_mandelbrat(t_data img);
int		yz_mouse_hook(int keycode, t_mlx *mx);
int		yz_key_hook(int keycode, t_mlx *mx);
// MENU
void	yz_print_menu(t_mlx *mx);


// TEMP
// void	mandelbrot_init(t_mlx *data);
// void	*mandelbrot(void *tab);

# define WW 500
# define HH 500

