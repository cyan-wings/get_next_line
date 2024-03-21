/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeow <myeow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:41:26 by myeow             #+#    #+#             */
/*   Updated: 2024/02/28 12:41:28 by myeow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*ptr_copy;
	size_t	bytes;

	if (size > 2147483647 / count)
		return (0);
	bytes = size * count;
	ptr = (void *)malloc(bytes);
	if (!ptr)
		return (0);
	ptr_copy = ptr;
	while (bytes--)
		*ptr_copy++ = 0;
	return (ptr);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		++i;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	char	ch;

	if (!s)
		return (0);
	ch = c;
	while (*s)
		if (*s++ == ch)
			return ((char *)--s);
	if (!c)
		return ((char *) s);
	return (0);
}

char	*ft_strjoin_read(char *s1, char *s2)
{
	char	*str;
	char	*str_cpy;
	char	*s1_cpy;

	if (!s1 || !s2)
		return (0);
	str = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!str)
		return (0);
	str_cpy = str;
	s1_cpy = s1;
	while (*s1_cpy)
		*str++ = *s1_cpy++;
	free(s1);
	while (*s2)
		*str++ = *s2++;
	return (str_cpy);
}
