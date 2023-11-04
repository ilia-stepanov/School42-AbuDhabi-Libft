/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:07:21 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 13:51:03 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	f(lst->content);
	ft_lstiter(lst->next, f);
}

// int	main(void)
// {
// 	t_list *ls1 = ft_lstnew("HEL");
// 	t_list *ls2 = ft_lstnew("HOW");
// 	ft_lstadd_front(&ls1, ls2);
// 	t_list *ls3 = ft_lstnew("ARE");
// 	ft_lstadd_front(&ls1, ls3);
// 	printf("%s\n", ls1->content);
// 	ft_lstiter(ls1, &ft_f);
// 	printf("%s\n", ls1);
// }