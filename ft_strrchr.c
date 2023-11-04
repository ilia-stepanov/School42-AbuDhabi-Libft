/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:18:24 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:06:58 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	int		len;

	res = (char *)s;
	len = ft_strlen(res);
	if ((unsigned char)c == 0)
		return (res + len);
	while (--len > -1)
		if (res[len] == (unsigned char)c)
			return (res + len);
	return (NULL);
}
