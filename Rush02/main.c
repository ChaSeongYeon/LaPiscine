/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:53:44 by seocha            #+#    #+#             */
/*   Updated: 2022/10/16 09:22:31 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	main(int argc, char *argv[])
{
	if (!ft_check_int(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
	{
		if (!ft_read_dict("numbers.dict"))
			return (0);
	}
	if (argc == 3)
	{
		if (!ft_read_dict(argv[1]))
			return (0);
	}
	else
		wrtie(1, "Argument Error\n", 15);
	return (0);
}
