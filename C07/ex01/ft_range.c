/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 08:28:32 by seocha            #+#    #+#             */
/*   Updated: 2022/10/13 10:39:51 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long long int			i;
	long long int			len;
	int						*arr;

	if (min >= max)
		return ((void *)0);
	len = max - min;
	arr = (int *)malloc(sizeof(int) * (len + 1));
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
