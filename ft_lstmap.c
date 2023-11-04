/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:42:52 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 13:50:05 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_copy;
	t_list	*lst_temp;

	if (!f || !del || !lst)
		return (NULL);
	lst_copy = NULL;
	while (lst)
	{
		lst_temp = ft_lstnew((*f)(lst->content));
		if (!lst_temp)
		{
			ft_lstclear(&lst_copy, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_copy, lst_temp);
		lst = lst->next;
	}
	return (lst_copy);
}

// int main() {
//     char *str1 = "Hello", *str2 = NULL, *str3 = "GPT-3.5";
//     t_list *str_list = ft_lstnew(str1);
//     ft_lstadd_back(&str_list, ft_lstnew(str2));
//     ft_lstadd_back(&str_list, ft_lstnew(str3));
// 	printf("%s\n", str_list->content);
//     t_list *transformed_str_list = ft_lstmap(str_list, &ft_f, free);
// 	printf("%s\n", transformed_str_list->next->next->content);

//     return 0;
// }
