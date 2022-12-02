/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:00:43 by seocha            #+#    #+#             */
/*   Updated: 2022/10/12 19:48:17 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_invalid2(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

char	*ft_isspace(char *str)
{
	while (*str)
	{
		if ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
		else
			break ;
	}
	return (str);
}

int	ft_sign_check(char *str)
{
	int	sign;

	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= (-1);
		str++;
	}
	return (sign);
}

int	ft_return_int(char *str, char *base, int base_len)
{
	int	j;
	int	result;

	result = 0;
	while (*str)
	{
		j = 0;
		while (j < base_len)
		{
			if (*str == base[j])
			{
				result = result * base_len + j;
				break ;
			}
			j++;
		}
		if (j == base_len && *str != base[j])
			return (result);
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	base_len;

	result = 0;
	if (!ft_check_invalid2(base))
		return (0);
	str = ft_isspace(str);
	sign = ft_sign_check(str);
	base_len = ft_check_invalid2(base);
	while (*str == '-' || *str == '+')
		str++;
	result = ft_return_int(str, base, base_len);
	return (result * sign);
}
