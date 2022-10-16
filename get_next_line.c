/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:50:48 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/16 16:08:19 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

char	*ft_get_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] != '\0' && str[i] == '\n')
		i += 2;
	line = ft_calloc(i, sizeof(char *));
	if (line = NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	return (line);
}

char	*ft_get_extra(char *str)
{
	int		i;
	int		len;
	char	*extra;

	len = 0;
	while (str[len] != '\0')
		len++;
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] != '\0' && str[i] == '\n')
		i += 1;
	extra = ft_calloc((len - i) + 1, sizeof(char *));
	if (extra == NULL)
		return (NULL);
	len = 0;
	while (str[i + len] != '\0')
	{
		extra[len] = str[i + len];
		len++;
	}
	return (extra);
}

char *get_next_line(int fd)
{
	char	*line;
	char	*tmp;
	static char buf[BUFFER_SIZE + 1] = "";	

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (buf == NULL)
		return (NULL);

	return (line);
}	



	
