/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:18:54 by seocha            #+#    #+#             */
/*   Updated: 2022/10/20 10:05:16 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct_map.h"
#include "stdio.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_first_check(char *str, char *code)
{
	if (!ft_isprint(code[0]) && !ft_isprint(code[1]) && !ft_isprint(code[2]))
		return (0);
	if (ft_strlen(str) < 4)
		return (0);
	if (code[0] == code[1] || code[0] == code[2] || code[1] == code[2])
		return (0);
	return (1);
}

int	ft_line_check(char *str, char *code)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] != code[0] && str[i] != code[1])
			flag = 0;
		i++;
	}
	return (flag);
}

int	ft_exception(char *str, struct s_map *map, int num)
{
	if (num == 0)
	{
		if (ft_first_check(str, map->code) == 0)
			return (0);
	}
	if (num == 1)
	{
		if (ft_line_check(str, map->code) == 0)
			return (0);
	}
	return (1);
}
