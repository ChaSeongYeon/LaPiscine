/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:32:34 by gunjkim           #+#    #+#             */
/*   Updated: 2022/10/20 12:26:57 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct_map.h"
#include "map_to_array.h"

void	ft_puterror(void)
{
	char	*str;

	str = "map_error\n";
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

char	*make_filename(char *str)
{
	int		i;
	int		j;
	char	*name;

	i = 0;
	j = 2;
	while (str[i] != '\0')
		i++;
	name = (char *)malloc(sizeof(char) * (i + 3));
	name[0] = '.';
	name[1] = '/';
	name[i + 2] = '\0';
	while (j < i + 3)
	{
		name[j] = str[j - 2];
		j++;
	}
	return (name);
}

void	print_bsqs(int argc, char *argv[], struct s_map *testmap, int *var)
{
	int		i;
	char	*filename;

	i = 1;
	while (i < argc)
	{
		filename = make_filename(argv[i++]);
		var[0] = open(filename, O_RDONLY);
		var[1] = find_len(var[0], testmap);
		if (var[1] == -1)
			var[2] = 0;
		close(var[0]);
		var[0] = open(filename, O_RDONLY);
		if (var[2] == 1)
			var[2] = find_condition(var[0], var[1], testmap);
		if (var[2] == 1)
			var[2] = file_to_map(testmap, var[0]);
		if (var[2] == 1)
			bsq(testmap);
		else
			ft_puterror();
		var[2] = 1;
		close(var[0]);
		free(filename);
	}
}

int	main(int argc, char *argv[])
{
	struct s_map	testmap;
	int				var[3];

	var[0] = 0;
	var[1] = 0;
	var[2] = 1;
	if (argc == 1)
	{
		find_condition(0, 1000, &testmap);
		testmap.col = 10000000;
		file_to_map(&testmap, 0);
		bsq(&testmap);
		return (0);
	}
	else if (argc != 1)
		print_bsqs(argc, argv, &testmap, var);
	return (0);
}
