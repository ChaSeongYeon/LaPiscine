/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_array.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunjkim <gunjkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:28:57 by gunjkim           #+#    #+#             */
/*   Updated: 2022/10/19 17:01:17 by gunjkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_TO_ARRAY_H
# define MAP_TO_ARRAY_H

int		find_condition(int fd, int len, struct s_map *map);
int		find_len(int fd, struct s_map *map);
int		file_to_map(struct s_map *map, int fd);
void	bsq(struct s_map *test_map);

#endif
