/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <esnowpea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 13:15:35 by esnowpea          #+#    #+#             */
/*   Updated: 2019/12/27 18:22:46 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int main(int argc, char **argv)
{
	int fd;
	char *line;

	if (argc != 1)
	{
		ft_putstr("usage: ./gnl [file]\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		ft_putstr(line);
		ft_putchar('\n');
		ft_strdel(&line);
	}
	close(fd);
	return (0);
}
