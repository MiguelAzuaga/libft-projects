/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqueiros <mqueiros@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:51:53 by mqueiros          #+#    #+#             */
/*   Updated: 2025/07/17 03:43:02 by mqueiros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

char			*get_next_line(int fd);
char			*ft_free_gnl(char *str);
size_t			ft_strlen(const char *str);
char			*ft_strndup(const char *str, size_t len);
void			*ft_memmove(void *dst, const void *src, size_t n);

#endif
