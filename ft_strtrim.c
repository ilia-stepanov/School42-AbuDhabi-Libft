/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:37:05 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:22:39 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isin(char c, char const *charset)
{
	int		i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	char	*res;

	if (!s1)
		return (NULL);
	str = (char *)s1;
	while (*str && ft_isin(*str, set))
		str++;
	i = ft_strlen(str) - 1;
	while (i >= 0 && ft_isin(str[i], set))
		i--;
	res = (char *)malloc((i + 2) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[++i] = '\0';
	while (--i >= 0)
		res[i] = str[i];
	return (res);
}

// int	main(void)
// {
// 	const char	s1[] = ".HELLO,-.,-";
// 	const char	set[] = ".,-";
// 	printf("%s", ft_strtrim(s1, set));

// }