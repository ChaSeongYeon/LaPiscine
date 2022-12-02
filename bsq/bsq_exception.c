/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_exception.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:05:26 by seocha            #+#    #+#             */
/*   Updated: 2022/10/20 10:12:10 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "struct_map.h"

void	print_long_row(struct s_map *map, int row, int col, int flag)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (flag == 1 && map->map[row - 1][i] == map->code[0])
		{
			write(1, &map->code[2], 1);
			flag = 0;
		}
		else
			write(1, &map->map[row - 1][i], 1);
		i++;
	}
}

void	print_long_col(struct s_map *map, int row, int col, int flag)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (flag == 1 && map->map[i][col - 1] == map->code[0])
		{
			write(1, &map->code[2], 1);
			flag = 0;
		}
		else
			write(1, &map->map[i][col - 1], 1);
		i++;
	}
}

void	print_long(struct s_map *map, int row, int col)
{
	int	flag;

	flag = 1;
	if (row == 1 && col == 1)
	{
		if (map->map[row - 1][col - 1] == map->code[0])
			write(1, &map->code[1], 1);
	}
	if (row == 1 && col != 1)
		print_long_row(map, row, col, flag);
	if (row != 1 && col == 1)
		print_long_col(map, row, col, flag);
	write(1, "\n", 1);
}
