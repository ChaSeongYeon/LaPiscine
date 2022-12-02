/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:10:37 by gunjkim           #+#    #+#             */
/*   Updated: 2022/10/20 11:19:33 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	m(int a, int b, int c)
{
	int	min;

	if (a <= b)
		min = a;
	else
		min = b;
	if (min > c)
		min = c;
	return (min);
}

void	change_max(int *max, int i, int j, int aij)
{
	if (max[0] <= aij)
	{
		max[0] = aij;
		max[1] = i;
		max[2] = j;
	}
}
