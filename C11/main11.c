/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojyang <seojyang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:24:30 by seojyang          #+#    #+#             */
/*   Updated: 2022/10/12 00:29:22 by seojyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include "ex00/ft_foreach.c"
#include "ex01/ft_map.c"
#include "ex02/ft_any.c"
#include "ex03/ft_count_if.c"
#include "ex04/ft_is_sort.c"
#include "ex06/ft_sort_string_tab.c"
#include "ex07/ft_advanced_sort_string_tab.c"

void	putput(int n)
{
	char	c;

	if (!n)
		return ;
	putput(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (!nb)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	putput(nb);
	write(1, "\n", 1);
}

int	is_positive(int a)
{
	if (a > 0)
		return (1);
	return (0);
}

int	is_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!is_lower(*str))
			return (0);
		str++;
	}
	return (1);
}

int	intcmp(int a, int b)
{
	return(a - b);
}


int	ft_strcmp222(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] || s2[n])
	{
		if (s1[n] != s2[n])
			break ;
		n++;
	}
	return ((unsigned char)s1[n] - (unsigned char)s2[n]);
}

int	main ()
{	
	printf("TESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
	printf("\n--ex00--\n\n");

	int n;
	int tab[4];
	tab[0] = 1;
	tab[1] = 10;
	tab[2] = 1212121;
	tab[3] = 2147483647;

	ft_foreach(tab, 4, ft_putnbr); //putnbr

	printf("\n--ex01--\n\n");

	int	pos[4];

	pos[0] = -1;
	pos[1] = -10;
	pos[2] = 1212121;
	pos[3] = 2147483647;

	int *out;

	out = ft_map(pos, 4, is_positive); //is_positive

	n = 0;
	while (n < 4)
		printf("%d\n", out[n++]);

	printf("\n--ex02--\n\n");

	char *str[5];

	str[0] = "Iwantonetry";
	str[1] = "Iwantonetry";
	str[2] = "Iwantonetry";
	str[3] = "iwantonetry";
	str[4] = "iwantonetry"; // ex02 ex03 ->> i or I 수정해서 확인ㄱㄱ

	printf("%d\n", ft_any(str, ft_str_is_lowercase)); //is_lowercase


	printf("\n--ex03--\n\n");


	printf("%d\n", ft_count_if(str, 5, ft_str_is_lowercase)); //is_lowercase


	printf("\n--ex04--\n\n");
	
	int arr1[6];

	arr1[0] = -1;
	arr1[1] = 1;
	arr1[2] = 234;
	arr1[3] = 1000;
	arr1[4] = 1000;
	arr1[5] = 2147483647;



	int arr2[6];

	arr2[0] = 10;
	arr2[1] = 10;
	arr2[2] = 10;
	arr2[3] = 10;
	arr2[4] = 10;
	arr2[5] = 10;



	int arr3[6];

	arr3[0] = 0;
	arr3[1] = -1;
	arr3[2] = -234;
	arr3[3] = -234;
	arr3[4] = -10000;
	arr3[5] = -2200000;

	printf("전부 1 나와야 정상\n");

	printf("%d\n", ft_is_sort(arr1, 6, intcmp));
	printf("%d\n", ft_is_sort(arr2, 6, intcmp));
	printf("%d\n", ft_is_sort(arr3, 6, intcmp));

	printf("\n--ex06--\n\n");

	printf("아빠 누나 오빠 엄마 순으로 나오면 정상\n");
	char *cha[6];

	cha[0] = "umma";
	cha[1] = "abbz";
	cha[2] = "nuna";
	cha[3] = "abba";
	cha[4] = "obba";
	cha[5] = 0;

	ft_sort_string_tab(cha);
	n = 0;
	while (n < 5)
		printf("%s\n", cha[n++]);

	printf("\n--ex07--\n\n");

	char *cha2[6];

	cha2[0] = "umma";
	cha2[1] = "abbz";
	cha2[2] = "nuna";
	cha2[3] = "abba";
	cha2[4] = "obba";
	cha2[5] = 0;

	ft_advanced_sort_string_tab(cha2, ft_strcmp222);
	n = 0;
	while (n < 5)
		printf("%s\n", cha2[n++]);


	printf("\nTESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
	printf("TESTCASE IS NOT GOD\n");
}
