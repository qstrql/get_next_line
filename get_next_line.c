/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjouot <mjouot@marvin.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:50:48 by mjouot            #+#    #+#             */
/*   Updated: 2022/10/10 16:27:34 by mjouot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

char *get_next_line(int fd)
{
	static char **tab[1024];
	char buf[BUFFER_SIZE];
	
	read(fd, buf, BUFFER_SIZE);
	

	return ();
}
