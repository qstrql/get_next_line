/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:51:07 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/18 16:35:13 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stddef.h> //size_t
#include <stdlib.h> //free, malloc

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		i;
	size_t		fullsize;
	char		*mem;

	i = 0;
	if (nmemb > 2147483647 || size > 2147483647)
		return ((void *)0);
	fullsize = size * nmemb;
	if (fullsize > 2147483647)
		return ((void *)0);
	mem = malloc(fullsize);
	if (mem == NULL)
		return (NULL);
	while (i < fullsize)
	{
		mem[i] = '\0';
		i++;
	}
	return (mem);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

char	*ft_strjoin(char *buf, char *line)
{
	size_t		i;
	size_t		j;
	size_t		len;
	char		*re_line;

	i = 0;
	j = 0;
	if (buf == NULL || line == NULL)
		return (NULL);
	len = ft_strlen(buf) + ft_strlen(line);
	re_line = ft_calloc(len + 1, sizeof(char));
	if (re_line == NULL)
		return (NULL);
	while (buf[i] != '\0')
	{
		re_line[i] = buf[i];
		i++;
	}
	while (line[j] != '\0')
	{
		re_line[i + j] = line[j];
		j++;
	}
	return (re_line);
}

char	*ft_realloc(char *buf, char *line)
{
	char	*re_line;

	re_line = ft_strjoin(buf, line);
	free(buf);
	return (re_line);
}
