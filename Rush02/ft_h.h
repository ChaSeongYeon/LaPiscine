/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seocha <seocha@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 08:40:36 by seocha            #+#    #+#             */
/*   Updated: 2022/10/16 09:23:33 by seocha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

#include <unistd.h>
#include <stdlib.h>

// dictionary 구조체
typedef struct s_dict
{
	char	*key;
	char	*value;
	struct	s_dict *next;
}	t_dict;

typedef struct s_list
{
	t_kv	head;
	struct	s_dict *tail;
}	t_list;

// ft_exception.c
int	ft_isnumeric(char c);
int	ft_isprint(char c);
int	ft_check_int(char *str);
int	ft_check_printable(char *str);

#endif
