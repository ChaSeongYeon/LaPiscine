/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 08:38:58 by seocha            #+#    #+#             */
/*   Updated: 2022/10/13 08:33:34 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			i;
	long long	len;
	int			*arr;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(sizeof(int) * (len + 1));
	i = 0;
	if (!*range)
		return (-1);
	arr = *range;
	while (min < max)
	{
		*arr = min;
		arr++;
		min++;
	}
	*arr = 0;
	return (len);
}
