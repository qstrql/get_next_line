/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:50:48 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/11 17:16:07 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

char *get_next_line(int fd)
{
	int	i;
	ssize_t	ret;
	char	*line;
	static char buf[BUFFER_SIZE + 1] = "";	


	while (ft_strchr(buf, '\n') == 0)
	{
		i = 0;
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == -1)
			return (NULL);
		while (buf[i] != '\n' && i < ret)
		{
			if (buf[i] == '\n')
			//ici on met tout dans une var line que on return
			//et le reste au debut du buf
		i++;
		}
		//si on a rien trouver on met dans line mais on return pas encore
		//on arrete de lire quand on a trouver le \n
		//
	}
	return (line); //faut malloc line
}
