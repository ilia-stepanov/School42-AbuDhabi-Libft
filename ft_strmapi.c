/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:00:06 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:06:41 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = -1;
	if (!s)
		return (NULL);
	res = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s[++i])
		res[i] = f(i, s[i]);
	res[i] = '\0';
	return (res);
}

// char test(unsigned int i, char c)
// {
// 	if (i > 9)
// 		return ((i % 10) + '0');
// 	return (i + '0'); 
// }

// int main(void)
// {
// 	printf("%s", ft_strmapi("Hello, World!", &test));
// }