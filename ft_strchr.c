/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <rle-ru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:17:23 by rle-ru            #+#    #+#             */
/*   Updated: 2019/01/15 20:18:29 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ret;

	if (!s)
		return (NULL);
	ret = (char*)s;
	if (c == '\0')
		return (&ret[ft_strlen(ret)]);
	while (*ret && *ret != c)
		++ret;
	if (*ret == '\0')
		return (NULL);
	else
		return (ret);
}
