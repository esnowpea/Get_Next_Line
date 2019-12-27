/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:11:12 by esnowpea          #+#    #+#             */
/*   Updated: 2019/09/09 18:39:26 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	if (!dest && !src)
		return (dest);
	tmp1 = (unsigned char*)dest;
	tmp2 = (unsigned char*)src;
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (tmp1);
}
