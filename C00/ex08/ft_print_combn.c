/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:16:46 by seocha            #+#    #+#             */
/*   Updated: 2022/10/08 21:16:35 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char a)
{
	write(1, &a, 1);
}

void	ft_recur_combn(int n, int depth, int before, char *c)
{
	int	idx;
	int	cur;

	idx = 0;
	cur = before + 1;
	if (depth == n)
	{
		while (idx < n)
		{
			ft_print_char(c[idx++]);
		}
		if (c[0] != 58 - n)
		{
			ft_print_char(',');
			ft_print_char(' ');
		}
		return ;
	}
	while (cur <= 9)
	{
		c[depth] = 48 + cur;
		ft_recur_combn(n, depth + 1, cur, c);
		cur++;
	}
}

void	ft_print_combn(int n)
{
	char	c[9];

	ft_recur_combn(n, 0, -1, c);
}
/*
int	main(void)
{
	int n = 1;
	while (n < 10)
	{
		ft_print_combn(n);
		write(1, "\n\n", 2);
		n++;
	}
	return (0);
}
*/
