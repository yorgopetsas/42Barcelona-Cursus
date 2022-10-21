/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/10/20 15:02:32 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*stash;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return(0);
	stash = yz_read_and_save(fd, stash);
	if (!save)
		return (NULL);
	line = yz_get_line(stash);
	stash = yz_save(stash);
	return(line);
}
