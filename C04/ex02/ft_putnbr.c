/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:31:36 by seocha            #+#    #+#             */
/*   Updated: 2022/10/08 20:57:25 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int a)
{
	a += 48;
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	int	r;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		ft_print_num(2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_print_num(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		r = nb % 10;
		ft_print_num(r);
	}
}
