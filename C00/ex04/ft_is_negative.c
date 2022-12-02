/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:15:29 by seocha            #+#    #+#             */
/*   Updated: 2022/09/29 11:20:50 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ne;
	char	po;

	if (n < 0)
	{
		ne = 'N';
		write(1, &ne, 1);
	}
	else
	{
		po = 'P';
		write(1, &po, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(40);
	return (0);
}
*/
