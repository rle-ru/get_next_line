/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <rle-ru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:08:13 by rle-ru            #+#    #+#             */
/*   Updated: 2019/01/14 10:53:05 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char	*ft_strnjoin(char *s1, char *s2, size_t n)
{
	char	*s;
	char	*ret;
	char	*temp;

	temp = s1;
	s = ft_strnew(ft_strlen(s1) + n + 1);
	ret = s;
	while (*s1)
		*s++ = *s1++;
	while (*s2 && n--)
		*s++ = *s2++;
	ft_strdel(&temp);
	return (ret);
}
