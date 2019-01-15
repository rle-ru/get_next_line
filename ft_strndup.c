/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <rle-ru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 09:09:34 by rle-ru            #+#    #+#             */
/*   Updated: 2019/01/14 10:52:27 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

char		*ft_strndup(char *s, size_t n)
{
	char	*new;

	if (!(new = ft_strnew(n)))
		return (0);
	new = ft_strncpy(new, s, n);
	new[n] = 0;
	return (new);
}
