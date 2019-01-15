/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <rle-ru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:01:24 by rle-ru            #+#    #+#             */
/*   Updated: 2019/01/15 20:01:38 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"

void	*ft_memalloc(size_t size)
{
	char	*new;

	if (!(new = (char*)malloc(size)))
		return (NULL);
	ft_bzero(new, size);
	return (new);
}
