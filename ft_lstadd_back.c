/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:33:20 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:04:16 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new && !(*lst))
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	if (last)
		last->next = new;
}

// int	main(void)
// {
// 	t_list	*ls1 = ft_lstnew("HELLO");
// 	t_list	*ls2 = ft_lstnew("WORLD");
// 	t_list	*ls3 = ft_lstnew("PRIVET");

// 	ft_lstadd_back(&ls1, ls2);
// 	printf("%s", ls1->next->content);
// 	ft_lstadd_back(&ls1, ls3);
// 	printf("%s", ls1->next->next->content);
// }