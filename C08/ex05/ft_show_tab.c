/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:12:51 by seocha            #+#    #+#             */
/*   Updated: 2022/10/15 07:50:34 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	long int	r;

	r = nb;
	if (r < 0)
	{
		ft_putchar('-');
		r = -r;
	}
	if (r >= 10)
	{
		ft_putnbr(r / 10);
		ft_putnbr(r % 10);
	}
	else
		ft_putchar(r + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (par == 0)
		return ;
	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		par++;
	}
}
