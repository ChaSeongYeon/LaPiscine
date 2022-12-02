/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 08:47:44 by seocha            #+#    #+#             */
/*   Updated: 2022/11/10 08:37:09 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	strs_len;
	int	sep_len;

	strs_len = 0;
	sep_len = ft_strlen2(sep);
	i = 0;
	if (size == 0)
		return (1);
	while (i < size - 1)
	{
		strs_len += ft_strlen2(strs[i]);
		strs_len += sep_len;
		i++;
	}
	strs_len += ft_strlen2(strs[i]);
	return (strs_len + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*arr;

	total_len = ft_total_len(size, strs, sep);
	arr = (char *)malloc(sizeof(char) * (total_len));
	if (!arr)
		return (0);
	if (size == 0)
	{
		*arr = '\0';
		return (arr);
	}
	*arr = '\0';
	i = 0;
	while (i < size - 1)
	{
		arr = ft_strcat(arr, strs[i]);
		arr = ft_strcat(arr, sep);
		i++;
	}
	arr = ft_strcat(arr, strs[i]);
	return (arr);
}
