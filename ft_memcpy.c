/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:03:27 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:05:29 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*char_dest;
	const char	*char_src;

	i = -1;
	if (!dst && !src)
		return (NULL);
	char_dest = (char *)dst;
	char_src = (const char *)src;
	while (++i < n)
		char_dest[i] = char_src[i];
	return (dst);
}

// int main () {
//    const char src[50] = "https://www.tutorialspoint.com";
//    char dest[50];
//    strcpy(dest,"Heloooo!!");
//    printf("Before memcpy dest = %s\n", dest);
//    ft_memcpy(dest, src, strlen(src)+1);
//    printf("After memcpy dest = %s\n", dest);
//    return(0);
// }

// int main () {
//    ft_memcpy(NULL, NULL, 3);

//    return(0);
// }