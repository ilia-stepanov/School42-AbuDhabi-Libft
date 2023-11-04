/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:57:26 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:05:33 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*char_dest;
	const char	*char_src;

	char_dest = (char *)dst;
	char_src = (char *)src;
	if (char_dest < char_src)
		while (len--)
			*(char_dest++) = *(char_src++);
	else if (char_dest > char_src)
		while (len-- > 0)
			char_dest[len] = char_src[len];
	else
		return (dst);
	return (dst);
}

// int	main(void)
// {
// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	printf("%s",ft_memmove(s0, s, 7));
// }