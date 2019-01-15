/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-ru <rle-ru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:30:28 by bwaterlo          #+#    #+#             */
/*   Updated: 2019/01/15 20:19:02 by rle-ru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 8
# include <limits.h>
# include <strings.h>

int				get_next_line(const int fd, char **line);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strdup(const char *src);
char			*ft_strcpy(char *dst, const char *src);
size_t			ft_strlen(const char *str);
void			*ft_memalloc(size_t size);
char			*ft_strnew(size_t size);
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
void			ft_strdel(char **s);
char			*ft_strnjoinfree(char const *s1, char const *s2, int n);
char			*ft_strchr(const char *s, int c);

#endif
