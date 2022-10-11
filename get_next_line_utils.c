/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:51:07 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/11 23:43:04 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		i;
	size_t	fullsize;
	char	*mem;

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		s_len;
	char		*out;

	i = 0;
	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	if (len > s_len)
		len = s_len;
	else if (s_len == len && len == start + 1)
		len = 1;
	if (start > s_len)
		return (out = ft_calloc(1, sizeof(char)));
	out = ft_calloc(len + 1, sizeof(char));
	if (out == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0' && start <= ft_strlen(s))
	{
		out[i] = s[start + i];
		i++;
	}
	return (out);
}
