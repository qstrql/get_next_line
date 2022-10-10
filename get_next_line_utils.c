/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:51:07 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/10 15:40:51 by mjouot           ###   ########.fr       */
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
