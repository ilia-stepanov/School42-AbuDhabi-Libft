/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 08:59:40 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 14:04:15 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	j;
	size_t	res;

	j = 0;
	if (!dstsize && !dst)
		return (0);
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dst);
	res = len_src + len_dest;
	if (!len_dest)
		res = len_src;
	if (len_dest >= dstsize)
		return (len_src + dstsize);
	while (len_dest < (dstsize - 1) && src[j] && dstsize)
		dst[len_dest++] = src[j++];
	dst[len_dest] = '\0';
	return (res);
}

// #include <stdlib.h>  
// #include <string.h>
// #include <stdio.h>

// int main() {
// 	char src[] = "privet";
//     char dest[10] = "";
// 	char dest2[10] = "";
//     unsigned int dstsize = 5;
// 	printf("%lu -- %s\n", strlcat(dest2, src, dstsize), dest2);
// 	printf("%lu -- %s\n\n", ft_strlcat(dest, src, dstsize), dest);

//     char dest3[15] = "123";
// 	char dest4[15] = "123";
//     dstsize = 10;
// 	printf("%lu -- %s\n", strlcat(dest4, src, dstsize), dest4);
// 	printf("%lu -- %s\n\n", ft_strlcat(dest3, src, dstsize), dest3);

//     char dest6[20] = "";
// 	char dest7[20] = "";
//     dstsize = 10;
// 	printf("%lu -- %s\n", strlcat(dest6, src, dstsize), dest6);
// 	printf("%lu -- %s\n\n", ft_strlcat(dest7, src, dstsize), dest7);

//     char dest9[20];
// 	char dest8[20];
// 	dstsize = 10; // 10
// 	printf("%lu -- %s\n", strlcat(dest8, src, dstsize), dest8);
// 	printf("%lu -- %s\n\n", ft_strlcat(dest9, src, dstsize), dest9);

//     char dest10[20] = "";
// 	char dest11[20] = "";
// 	char src2[10] = "";
//     dstsize = 10;
// 	printf("%lu -- %s\n", strlcat(dest10, src2, dstsize), dest10);
// 	printf("%lu -- %s\n\n", ft_strlcat(dest11, src2, dstsize), dest11);
//     return 0;
// }

// int	main()
// {
// 	ft_strlcat(NULL, "HELLO", 0);
// 	return (0);
// }