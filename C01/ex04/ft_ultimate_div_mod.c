/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:08:15 by seocha            #+#    #+#             */
/*   Updated: 2022/10/01 08:11:05 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int c = 15;
	int d = 5;

	int *a = &c;
	int *b = &d;
	printf("%d / %d, %d %% %d\n", c, d, c, d); 
	ft_ultimate_div_mod(a, b);
	printf("%d\t%d", *a, *b);
	return (0);
}
*/
