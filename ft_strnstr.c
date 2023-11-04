/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 00:15:40 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:22:27 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_same(char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (needle[i])
	{
		if (!haystack[i])
			return (0);
		if (needle[i] != haystack[i])
			return (0);
		if (i >= len)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*haystack_copy;

	if (!haystack && !len)
		return (NULL);
	haystack_copy = (char *)haystack;
	i = 0;
	if (needle[0] == '\0')
		return (haystack_copy);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0] && is_same(haystack_copy, needle, len - i))
			return (haystack_copy);
		i++;
		haystack_copy++;
	}
	return (NULL);
}
