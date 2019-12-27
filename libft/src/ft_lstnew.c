/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:37:12 by esnowpea          #+#    #+#             */
/*   Updated: 2019/09/13 13:19:03 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = (t_list*)malloc(sizeof(t_list));
	if (!list)
		return (0);
	list->next = 0;
	list->content = 0;
	list->content_size = 0;
	if (!content)
		return (list);
	list->content = (void*)malloc(content_size);
	if (!list->content)
	{
		free(list);
		return (0);
	}
	list->content = ft_memcpy(list->content, content, content_size);
	list->content_size = content_size;
	return (list);
}
