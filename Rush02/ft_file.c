/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 09:26:03 by seocha            #+#    #+#             */
/*   Updated: 2022/10/16 09:54:25 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char	*ft_malloc(char	*str)
{
	int		len;
	int		i;
	char	*arr;

	while (str[i] != ' ' && str[i] != ':' && str[i] != '\n')
	{
		len++;
		i++;
	}
	arr = (char *)mallco(sizeof(char) * (len + 1));
	if (!arr)
		return (0);
	return (arr);
}

int	ft_check(char c)
{
	return ((c >= 9 && c <= 13) || c == 32 || c == ':');
}


