/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:50:59 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/11 23:43:01 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stddef.h>

typedef struct s_map
{
	int			fd;
	void 		*content;
	struct s_map *next;
} t_map;

char *get_next_line(int fd);
//utils
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strchr(const char *s, int c)
char	*ft_substr(char const *s, unsigned int start, size_t len)



#endif 
