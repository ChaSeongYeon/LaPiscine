/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 08:17:18 by seocha            #+#    #+#             */
/*   Updated: 2022/10/15 17:21:10 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isin(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_cnt_split(char *str, char *charset)
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (str[i] && ft_isin(str[i], charset))
			i++;
		if (str[i] && !ft_isin(str[i], charset))
		{
			cnt ++;
			while (str[i] && !ft_isin(str[i], charset))
				i++;
		}
	}
	return (cnt);
}

char	*ft_arr(char *str, char *charset)
{
	int		i;
	int		cnt;
	char	*word;

	cnt = 0;
	while (str[cnt] && !ft_isin(str[cnt], charset))
		cnt++;
	word = (char *)malloc(sizeof(char) * (cnt + 1));
	if (!word)
		return (0);
	i = 0;
	while (str[i] && !ft_isin(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**arr;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * (ft_cnt_split(str, charset) + 1));
	if (!arr)
		return (0);
	while (*str)
	{
		while (*str && ft_isin(*str, charset))
			str++;
		if (*str && !ft_isin(*str, charset))
		{
			arr[i] = ft_arr(str, charset);
			i++;
			while (*str && !ft_isin(*str, charset))
				str++;
		}
	}
	arr[i] = 0;
	return (arr);
}
