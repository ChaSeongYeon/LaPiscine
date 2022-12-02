/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:15:37 by seocha            #+#    #+#             */
/*   Updated: 2022/10/08 20:55:24 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str != '\0')
	{
		cnt++;
		str++;
	}
	return (cnt);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "Hello!";
	int cnt = ft_strlen(str);
	printf("number of characters in a string : %d", cnt);
	return 0;
}
*/
