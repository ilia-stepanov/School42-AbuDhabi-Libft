/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:00:39 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:05:22 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*char_str1;
	const char	*char_str2;
	size_t		i;

	char_str1 = (const char *)s1;
	char_str2 = (const char *)s2;
	i = 0;
	while (i < n && char_str1[i] == char_str2[i])
		i++;
	if (i == n)
		return (0);
	return (((unsigned char *)char_str1)[i] - ((unsigned char *)char_str2)[i]);
}

// {
// 	char	*char_str1;
// 	char	*char_str2;

// 	char_str1 = (char *)s1;
// 	char_str2 = (char *)s2;
// 	while (n--)
// 	{
// 		if (*char_str1 != *char_str2)
// 			return (*char_str1 - *char_str2);
// 		char_str1++;
// 		char_str2++;
// 	}
// 	return (0);
// }

// int main(void)
// {

//     printf("%d", ft_memcmp("h\0le", "h\0el", 3));

// }