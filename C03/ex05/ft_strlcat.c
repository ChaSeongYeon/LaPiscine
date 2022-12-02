/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:47:29 by seocha            #+#    #+#             */
/*   Updated: 2022/10/09 10:19:28 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	while (dest[i] != '\0')
		i++;
	dest_size = i;
	src_size = 0;
	if (size > i)
	{
		while (src[src_size] != '\0' && i < size - 1)
		{
			dest[i] = src[src_size];
			i++;
			src_size++;
		}
	}
	dest[i] = '\0';
	while (src[src_size] != '\0')
		src_size++;
	if (dest_size < size)
		return (dest_size + src_size);
	else
		return (size + src_size);
}
