/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:53:56 by seocha            #+#    #+#             */
/*   Updated: 2022/10/17 10:19:20 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char	ft_isoper(char *str)
{
	char	c;

	if (ft_strlen(str) == 1)
	{
		c = str[0];
		if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
			return (c);
	}
	return (0);
}

void	ft_operator(int a, int b, char c)
{
	if (c == '+')
		ft_putnbr(a + b);
	else if (c == '-')
		ft_putnbr(a - b);
	else if (c == '*')
		ft_putnbr(a * b);
	else if (c == '/')
	{
		if (b == 0)
		{
			ft_putstr("Stop : division by zero");
			return ;
		}
		ft_putnbr(a / b);
	}
	else if (c == '%')
	{
		if (b == 0)
		{
			ft_putstr("Stop : modulo by zero");
			return ;
		}
		ft_putnbr(a % b);
	}
}

int	main(int argc, char	*argv[])
{
	int		num1;
	int		num2;
	char	c;

	if (argc == 4)
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);
		c = ft_isoper(argv[2]);
		if (c == 0)
		{
			ft_putstr("0\n");
			return (0);
		}
		ft_operator(num1, num2, c);
		ft_putchar('\n');
	}
	return (0);
}
