/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:39:34 by seocha            #+#    #+#             */
/*   Updated: 2022/10/09 10:14:38 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		a = str;
		b = to_find;
		while (*b != '\0' && (*a == *b))
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (str);
		str++;
	}
	return (0);
}
