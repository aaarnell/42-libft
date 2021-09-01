/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarnell <aarnell@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 21:04:13 by aarnell           #+#    #+#             */
/*   Updated: 2021/09/01 21:36:05 by aarnell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*tmp;

	if (lst && *lst && del)
	{
		cur = *lst;
		while (cur)
		{
			tmp = cur->next;
			ft_lstdelone(cur, del);
			cur->next = NULL;
			free(cur);
			cur = NULL;
			cur = tmp;
		}
		*lst = NULL;
	}
}
