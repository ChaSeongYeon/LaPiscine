/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:28:37 by seocha            #+#    #+#             */
/*   Updated: 2022/10/12 21:45:48 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_islower(char c)
{
	return ((c >= 'a' && c < 'z'));
}

int	ft_char_isupper(char c)
{
	return ((c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (ft_char_islower(str[i]) || ft_char_isupper(str[i]))
		{
			if (flag && ft_char_islower(str[i]))
				str[i] -= 32;
			if (!flag && ft_char_isupper(str[i]))
				str[i] += 32;
			flag = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
