/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:58:04 by seocha            #+#    #+#             */
/*   Updated: 2022/10/01 08:09:59 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int main(void)
{
	int c = 15;
	int d = 5;
	int *a = &c;
	int *b = &d;
	printf("before swap - a: %d, b: %d\n", *a, *b);
	ft_swap(a, b);
	printf("after swap - a: %d, b: %d\n", *a, *b);
}
*/
