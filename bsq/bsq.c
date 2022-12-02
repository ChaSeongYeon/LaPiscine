/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:24:56 by seocha            #+#    #+#             */
/*   Updated: 2022/10/20 12:14:47 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct_map.h"
#include "math.h"
#include "bsq_exception.h"

void	ft_init(struct s_map *test_map, int **ans)
{	
	int		i;
	int		last_col;
	int		last_row;
	char	**map;

	map = test_map->map;
	last_row = test_map->row - 1;
	last_col = test_map->col - 1;
	i = 0;
	while (i <= last_row)
	{
		if (map[i][last_col] == test_map->code[0])
			ans[i++][last_col] = 1;
		else if (map[i][last_col] == test_map->code[1])
			ans[i++][last_col] = 0;
	}
	i = 0;
	while (i <= last_col)
	{
		if (map[last_row][i] == test_map->code[0])
			ans[last_row][i++] = 1;
		else if (map[last_row][i] == test_map->code[1])
			ans[last_row][i++] = 0;
	}
}

void	ft_max_sq(struct s_map *test_map, int **a, int *max)
{
	int	i;
	int	j;

	max[0] = 0;
	i = test_map->row - 2;
	if (i < 0)
		i = 0;
	while (i >= 0)
	{
		j = test_map->col - 2;
		if (j < 0)
			j = 0;
		while (j >= 0)
		{
			if (test_map->map[i][j] != test_map->code[1])
			{
				a[i][j] = 1 + m(a[i][j + 1], a[i + 1][j], a[i + 1][j + 1]);
				change_max(max, i, j, a[i][j]);
			}
			else
				a[i][j] = 0;
			j--;
		}
		i--;
	}
}

void	ft_print_ans(struct s_map *test_map, int max_cnt, int max_r, int max_c)
{
	char	**map;
	int		i;
	int		j;

	map = test_map->map;
	i = max_r;
	while (i < max_r + max_cnt)
	{
		j = max_c;
		while (j < max_c + max_cnt)
		{
			map[i][j] = test_map->code[2];
			j++;
		}
		i++;
	}
	i = 0;
	while (i < test_map->row)
	{
		write(1, map[i], test_map ->col);
		write(1, "\n", 1);
		i++;
	}
}

void	bsq(struct s_map *test_map)
{
	int	**ans;
	int	max[3];
	int	i;

	if (test_map->row == 1 || test_map->col == 1)
	{
		print_long(test_map, test_map->row, test_map->col);
		return ;
	}
	i = 0;
	ans = (int **)malloc(sizeof(int *) * test_map->row);
	while (i < test_map->row)
		ans[i++] = (int *)malloc(sizeof(int) * test_map->col);
	ft_init(test_map, ans);
	ft_max_sq(test_map, ans, max);
	ft_print_ans(test_map, max[0], max[1], max[2]);
	i = 0;
	while (i < test_map->row)
	{
		free(ans[i]);
		free(test_map->map[i++]);
	}
	free(ans);
	free(test_map->map);
}
