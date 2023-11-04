/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 00:41:26 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:20:48 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(long nb)
{
	int	i;

	if (!nb)
		return (1);
	i = 0;
	while (nb && ++i)
		nb /= 10;
	return (i);
}

static long	get_num_abs(long nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

static int	check_if_negative(long nb)
{
	if (nb < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	int		num_len;
	int		is_negative;
	char	*res;
	long	nbl;

	nbl = n;
	is_negative = check_if_negative(nbl);
	nbl = get_num_abs(nbl);
	num_len = get_num_len(nbl) + is_negative;
	res = malloc((num_len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[num_len] = '\0';
	while (num_len-- > 0)
	{
		res[num_len] = (nbl % 10) + '0';
		nbl /= 10;
	}
	if (is_negative)
		res[0] = '-';
	return (res);
}
