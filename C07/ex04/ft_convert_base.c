/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:48:06 by seocha            #+#    #+#             */
/*   Updated: 2022/10/15 08:11:59 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_invalid2(char *base);
char	*ft_isspace(char *str);
int		ft_sign_check(char *str);
int		ft_atoi_base(char *str, char *base);

char	*ft_itoa_base(long long int nbr, char *base_to, char *arr, int nbr_len)
{
	int				i;
	long long int	nb;
	long long int	base_len;

	i = nbr_len;
	arr[i--] = '\0';
	if (nbr < 0)
		nb = -nbr;
	else
		nb = nbr;
	if (!ft_check_invalid2(base_to))
		return (0);
	base_len = ft_check_invalid2(base_to);
	if (nbr == 0)
		arr[i--] = base_to[0];
	while (nb > 0)
	{
		arr[i--] = base_to[nb % base_len];
		nb /= base_len;
	}
	if (nbr < 0)
		arr[i] = '-';
	return (arr);
}

int	ft_nbr_len(long long int nbr, int base_len)
{
	long long int	nb;
	int				nbr_len;

	nbr_len = 0;
	if (nbr > 0)
		nb = nbr;
	else
		nb = -nbr;
	while (nb >= base_len)
	{
		nbr_len++;
		nb /= base_len;
	}
	if (nbr < 0)
		nbr_len++;
	return (++nbr_len);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		digit;
	int		nbr_len;
	char	*arr;

	if (!nbr || !ft_check_invalid2(base_from) || !ft_check_invalid2(base_to))
		return (0);
	digit = ft_atoi_base(nbr, base_from);
	nbr_len = ft_nbr_len(digit, ft_check_invalid2(base_to));
	arr = (char *)malloc(sizeof(char) * nbr_len);
	if (!arr)
		return (0);
	ft_itoa_base(digit, base_to, arr, nbr_len);
	return (arr);
}
