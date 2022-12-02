/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:19:14 by seocha            #+#    #+#             */
/*   Updated: 2022/10/12 20:30:33 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	int odd[] = {1,2,3,4,5};
	int even[] = {1,2,3,4};

	ft_rev_int_tab(odd, 5);
	ft_rev_int_tab(even, 4);
	int i = 0;
	while (i < 5)
	{
		printf("%d ",odd[i]);
		i++;
	}
	printf("\n");
	int j = 0;
	while (j < 4)
	{
		printf("%d ", even[j]);
		j++;
	}
}
*/
