/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:25:20 by seocha            #+#    #+#             */
/*   Updated: 2022/10/11 10:45:44 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rt_hexa(unsigned char dc, unsigned char *arr)
{
	if (dc / 16 < 10)
		arr[0] = dc / 16 + '0';
	else
		arr[0] = dc / 16 + 87;
	if (dc % 16 < 10)
		arr[1] = dc % 16 + '0';
	else
		arr[1] = dc % 16 + 87;
}

void	ft_print_hex(unsigned char *str, int repeat)
{
	unsigned char	arr[2];
	int				i;

	i = 0;
	while (i < 16)
	{
		if (i > repeat - 1)
			write(1, "  ", 2);
		else
		{
			ft_rt_hexa(str[i], arr);
			write(1, arr, 2);
		}
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_address(long long int addr, int repeat)
{
	char	temp;

	if (--repeat)
	{
		ft_print_address(addr / 16, repeat);
		if (addr % 16 < 10)
			temp = addr % 16 + '0';
		else
			temp = addr % 16 + 87;
		write(1, &temp, 1);
	}
	if (repeat == 15)
		write(1, ": ", 2);
}

void	ft_print_str(unsigned char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	int	j;
	int	repeat;

	i = size / 16;
	j = 0;
	if (size == 0)
		return (addr);
	while (i + 1)
	{
		repeat = 16;
		if (i-- == 0)
			repeat = size % 16;
		ft_print_address((long long int)(addr + j), 16);
		ft_print_hex(addr + j, repeat);
		ft_print_str(addr + j, repeat);
		write(1, "\n", 1);
		j = j + 16;
	}
	return (addr);
}
