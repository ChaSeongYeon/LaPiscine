/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgeum <jgeum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:22:01 by sanglee2          #+#    #+#             */
/*   Updated: 2022/10/03 18:10:39 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_letter(int width, char start, char middle, char end)
{
	ft_putchar(start);
	if (width > 1)
	{
		width = width - 2;
		while (width --)
		{
			ft_putchar(middle);
		}
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int width, int depth)
{
	if (width <= 0 || depth <= 0)
	{
		ft_putstr("You must input positive integer");
		return ;
	}
	else
	{
		print_letter(width, 'A', 'B', 'A');
	}
	if (depth > 1)
	{
		depth = depth - 2;
		while (depth--)
		{
			print_letter(width, 'B', ' ', 'B');
		}
		print_letter(width, 'C', 'B', 'C');
	}
}
