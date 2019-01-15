/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoinfree.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <rle-ru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:32:47 by rle-ru            #+#    #+#             */
/*   Updated: 2019/01/15 20:16:46 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

char	*ft_strnjoinfree(char const *s1, char const *s2, int n)
{
	size_t	size;
	char	*str;

	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + n;
	if (!(str = ft_strnew(size)))
		return (0);
	ft_strcpy(str, (char*)s1);
	ft_strncat(str, (char*)s2, n);
	free((char*)s1);
	return (str);
}
