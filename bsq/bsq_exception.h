/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_exception.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:09:14 by seocha            #+#    #+#             */
/*   Updated: 2022/10/20 10:11:00 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_EXCEPTION_H
# define BSQ_EXCEPTION_H

void	print_long_row(struct s_map *map, int row, int col, int flag);
void	print_long_col(struct s_map *map, int row, int col, int flag);
void	print_long(struct s_map *map, int row, int col);

#endif
