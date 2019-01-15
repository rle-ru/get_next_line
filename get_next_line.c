/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <rle-ru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 07:28:29 by rle-ru            #+#    #+#             */
/*   Updated: 2019/01/15 20:10:12 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>

static int	gnl_realloc(int *i, char **line, char **fd)
{
	char	*tmp;

	if (!(*line = ft_strsub(*fd, 0, *i)))
		return (0);
	*i += ((*fd)[*i] == '\n');
	tmp = *fd;
	if (!(*fd = ft_strdup(*fd + *i)))
		return (0);
	ft_strdel(&tmp);
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*s[OPEN_MAX];
	char		buf[BUFF_SIZE + 1];
	int			i;

	if (fd < 0 || !line)
		return (-1);
	i = 0;
	if (!s[fd])
		if (!(s[fd] = ft_strnew(0)))
			return (-1);
	while (!ft_strchr(s[fd], '\n') && (i = read(fd, buf, BUFF_SIZE)) > 0)
		if (!(s[fd] = ft_strnjoinfree(s[fd], buf, i)))
			return (-1);
	if (i == -1)
		return (-1);
	i = 0;
	while (s[fd][i] && s[fd][i] != '\n')
		++i;
	if (!gnl_realloc(&i, line, &s[fd]))
		return (-1);
	if (s[fd] && s[fd][0] == 0)
		ft_strdel(&s[fd]);
	return (i ? 1 : 0);
}
