/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrochar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 14:11:45 by pbrochar          #+#    #+#             */
/*   Updated: 2021/02/28 13:19:41 by pbrochar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft.h"

# define BUFFER_SIZE 4096

typedef struct	s_gnl
{
	char			buf[BUFFER_SIZE + 1];
	unsigned int	pos;
	int				fd;
}				t_gnl;

int				get_next_line(int fd, char **line);
char			*ft_realloc(char *src, size_t newsize);
void			*ft_memcpy(void *dest, const void *src, size_t n);
int				ft_strccat(t_gnl *gnl, char **dst);
size_t			ft_strclen(char *str);
#endif
