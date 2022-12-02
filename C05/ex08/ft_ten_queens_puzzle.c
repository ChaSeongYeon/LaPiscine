/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 08:07:57 by seocha            #+#    #+#             */
/*   Updated: 2022/10/11 19:56:18 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_map(char *map)
{
	write(1, map, 10);
	write(1, "\n", 1);
}

int	ft_map_check(char *map, int idx)
{
	int	jdx;
	int	abs;

	jdx = 0;
	while (jdx < idx)
	{
		abs = idx - jdx;
		if (map[jdx] == map[idx])
			return (0);
		else if (map[jdx] - abs == map[idx] || map[jdx] + abs == map[idx])
			return (0);
		jdx++;
	}
	return (1);
}

void	ft_find_queens(char *map, int idx, int *count)
{
	char	pos;

	pos = '0';
	if (idx == 9)
	{
		(*count)++;
		ft_print_map(map);
	}
	while (pos <= '9')
	{
		map[idx + 1] = pos;
		if (ft_map_check(map, idx + 1))
			ft_find_queens(map, idx + 1, count);
		pos++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	map[11];
	int		count;

	count = 0;
	ft_find_queens(map, -1, &count);
	return (count);
}
