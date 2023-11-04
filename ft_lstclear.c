/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 00:32:06 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:04:33 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		lst_next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = lst_next;
	}
	*lst = NULL;
}
