/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:24:38 by seocha            #+#    #+#             */
/*   Updated: 2022/10/16 17:39:29 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_dec_hexa(unsigned char dc)
{
	char	a;
	char	b;

	if (dc / 16 < 10)
		a = dc / 16 + '0';
	else
		a = dc / 16 + 87;
	if (dc % 16 < 10)
		b = dc % 16 + '0';
	else
		b = dc % 16 + 87;
	ft_putchar(a);
	ft_putchar(b);
}

int	ft_char_is_printable(unsigned char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (ft_char_is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_dec_hexa(str[i]);
		}
		str++;
	}
}
