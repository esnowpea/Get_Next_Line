/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <esnowpea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 18:39:03 by esnowpea          #+#    #+#             */
/*   Updated: 2019/10/02 18:10:26 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*ft_str_add(char **str)
{
	char	*n_ptr;
	char	*tmp;
	char	*line;
	size_t	b;

	n_ptr = ft_strchr(*str, '\n');
	if (n_ptr)
		*n_ptr = '\0';
	line = ft_strdup(*str);
	b = n_ptr ? 1 : 0;
	tmp = ft_strdup(ft_strchr(*str, '\0') + b);
	ft_strdel(str);
	*str = tmp;
	return (line);
}

size_t		ft_gnl_del(char **as, size_t n)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
	return (n);
}

int			get_next_line(const int fd, char **line)
{
	static char	*str[OPEN_MAX];
	char		*tmp;
	char		buf[BUFF_SIZE + 1];
	ssize_t		res;

	if (fd < 0 || !line || fd > OPEN_MAX || BUFF_SIZE <= 0)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(0);
	while (!(ft_strchr(str[fd], '\n')) && (res = read(fd, buf, BUFF_SIZE)))
	{
		if (res == -1)
			return (ft_gnl_del(&str[fd], -1));
		buf[res] = '\0';
		tmp = ft_strjoin(str[fd], buf);
		ft_strdel(&str[fd]);
		str[fd] = tmp;
	}
	if (*str[fd] == '\0')
		return (ft_gnl_del(&str[fd], 0));
	*line = ft_str_add(&str[fd]);
	return (1);
}
