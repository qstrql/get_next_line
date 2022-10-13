/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:50:48 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/13 12:22:44 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
char	*ft_line_alloc(char *line)
{
	
}

char *get_next_line(int fd)
{
	size_t	i;
	char	*line;
	char	*tmp;
	static char buf[BUFFER_SIZE + 1] = "";	:w

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	if (buf == NULL)
		return (NULL);
	while (ft_strchr(buf, '\n') == 0)
	{
		i = 0;
		buf = read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
			return (NULL);
		
			
			i++;
		}
	
	}
	return (line);
}	



	
