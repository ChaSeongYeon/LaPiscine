/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgeum <jgeum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:27:36 by sanglee2          #+#    #+#             */
/*   Updated: 2022/10/04 13:59:46 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	rush(int width, int depth);
void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (ft_atoi(argv[1]) == -1 || ft_atoi(argv[2]) == -1)
		{
			ft_putstr("input data is not integer");
			return (0);
		}
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
		return (0);
	}
	else
	{
		ft_putstr("wrong input");
		return (-1);
	}
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if ((str[i] < '0' && str[i] > '9') || str[i] != '\0')
	{
		return (-1);
	}
	return (result * sign);
}
