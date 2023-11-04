/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:10:59 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 13:34:10 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*res;

	if (count && size && count > (UINT_MAX / size))
		return (NULL);
	res = (char *)malloc(count * size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, size * count);
	return ((void *)res);
}
