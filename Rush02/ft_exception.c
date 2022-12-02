/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exception.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 08:32:13 by seocha            #+#    #+#             */
/*   Updated: 2022/10/16 10:23:41 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	ft_isnumeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}

// 받은 인자가 유효한 양의 정수인지 확인
int	ft_check_int(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isnumeric(str[i]))
			return (0);
		i++:
	}
	return (1);
}

// 받은 딕셔너리가 프린트 할 수 있는 문자인지 왁인
int	ft_check_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		if (!ft_isprint(str[i]))
			return (0);
		i++;
	}
	return (1);
}
