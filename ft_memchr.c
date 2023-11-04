/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:57:26 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 13:16:28 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*char_str;

	char_str = (unsigned char *)s;
	while (n--)
	{
		if (*char_str == (unsigned char)c)
			return (char_str);
		else
			char_str++;
	}
	return (NULL);
}

// int main(void)
// {
//     char    *res;
//     char str[] = "hello how are you";

//     res = ft_memchr(str, 'y', strlen(str));
//     printf("%s", res);
// }