/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:33:24 by seocha            #+#    #+#             */
/*   Updated: 2022/10/06 19:31:06 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(char a)
{
	write(1, &a, 1);
}

void	ft_print_nums(char a, char b, char c)
{
	ft_print_num(a);
	ft_print_num(b);
	ft_print_num(c);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_nums(a, b, c);
				if (a != '7' || b != '8' || c != '9')
				{
					write (1, ", ", 2);
				}
				c ++;
			}
			b ++;
		}
		a ++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}
*/
