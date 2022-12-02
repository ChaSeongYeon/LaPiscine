/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:04:49 by seocha            #+#    #+#             */
/*   Updated: 2022/10/01 08:10:28 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
	int a = 15;
	int b = 3;
	int c = 0;
	int d = 0;
	int *div = &c;
	int *mod = &d;

	ft_div_mod(a,b,div,mod);
	printf("%d / %d = %d\n%d %% %d = %d", a, b, *div, a, b, *mod);
}
*/
