/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:33:08 by seocha            #+#    #+#             */
/*   Updated: 2022/10/13 09:26:39 by seocha           ###   ########.fr       */
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
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-50);
	write(1, "\n", 1);
	ft_putnbr(123);
	write(1, "\n", 1);
	ft_putnbr(0);
	return (0);
}
*/
