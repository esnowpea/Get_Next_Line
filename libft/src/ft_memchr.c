/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:48:12 by esnowpea          #+#    #+#             */
/*   Updated: 2019/09/10 12:46:07 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char*)s;
	while (tmp[i] && i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return (tmp + i);
		i++;
	}
	if (tmp[i] == (unsigned char)c && tmp[i] == '\0')
		return (tmp + i);
	return (0);
}
