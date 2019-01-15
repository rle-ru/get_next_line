/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <rle-ru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 08:48:43 by rle-ru            #+#    #+#             */
/*   Updated: 2019/01/15 20:03:09 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		l;
	char	*str;

	i = 0;
	l = ft_strlen(src);
	if (!(str = (char*)ft_memalloc(sizeof(*str) * (l + 1))))
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}
