/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:48:25 by gunjkim           #+#    #+#             */
/*   Updated: 2022/10/20 12:29:07 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct_map.h"
#include "exception.h"

int	find_condition(int fd, int len, struct s_map *map)
{
	char	str[1000];
	int		number_of_lines;
	int		index;
	int		bytes;

	index = 0;
	number_of_lines = 0;
	bytes = read(fd, str, len + 1);
	str[bytes - 1] = '\0';
	map->code[2] = str[bytes - 2];
	map->code[1] = str[bytes - 3];
	map->code[0] = str[bytes - 4];
	if (ft_exception(str, map, 0) == 0)
		return (0);
	while (index < bytes - 4)
	{
		number_of_lines = 10 * number_of_lines + str[index] - '0';
		index++;
	}
	map->row = number_of_lines;
	if (map->row < 1 || map->col < 1)
		return (0);
	return (1);
}

int	find_len(int fd, struct s_map *map)
{
	char	buf;
	int		first_len;
	int		second_len;

	if (fd == -1)
		return (-1);
	first_len = 0;
	second_len = 0;
	read(fd, &buf, 1);
	while (buf != '\n')
	{
		first_len++;
		read(fd, &buf, 1);
	}
	read(fd, &buf, 1);
	while (buf != '\n')
	{
		second_len++;
		read(fd, &buf, 1);
	}
	map->col = second_len;
	return (first_len);
}

int	file_to_map(struct s_map *map, int fd)
{
	int		i;
	int		flag[2];
	int		bytes;

	i = 0;
	flag[0] = 1;
	flag[1] = 1;
	map->map = (char **)malloc(sizeof(char *) * map->row);
	while (i < map->row)
	{
		map->map[i] = (char *)malloc(sizeof(char) * (map -> col + 1));
		bytes = read(fd, map->map[i], map->col + 1);
		if (flag[1] == 1 && fd == 0)
		{
			map->col = bytes - 1;
			flag[1] = 0;
		}
		if (map->map[i][map -> row] != '\n' && bytes - 1 != map -> row)
			flag[0] = 0;
		map->map[i][bytes - 1] = '\0';
		if (ft_exception(map->map[i], map, 1) == 0)
			flag[0] = 0;
		i++;
	}
	return (flag[0]);
}
