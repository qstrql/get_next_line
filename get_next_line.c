/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:50:48 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/12 01:06:51 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
char	*ft_line_alloc

char *get_next_line(int fd)
{
	size_t	i;
	char	*line;
	char	*tmp;
	static char buf[BUFFER_SIZE + 1] = "";	

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (buf == NULL)
		return (NULL);
	while (ft_strchr(buf, '\n') == 0)
	{
		i = 0;
		buf = read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
			return (NULL);
		while (buf[i] != '\n' && i < ret)
		{
			if (buf[i] == '\n')
				tmp = ft_substr(buf, 0, i);
			//cat line+tmp;
		i++;
		}
	
	}
	return (line);
}	



	
