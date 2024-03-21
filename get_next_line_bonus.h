/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:39:46 by myeow             #+#    #+#             */
/*   Updated: 2024/02/28 13:11:36 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>

void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin_read(char *s1, char *s2);
char	*ft_readline(char *str, int fd);
char	*ft_extractline(char *str);
char	*get_leftover_line(char *str);
char	*get_next_line(int fd);

#endif
