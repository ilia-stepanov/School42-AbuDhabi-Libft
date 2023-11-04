/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:50:52 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 14:03:13 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

static unsigned long long	get_power(int degree)
{
	unsigned long long	s;

	s = 1;
	while (degree--)
		s *= 10;
	return (s);
}

static unsigned long long	adjust_big_value(
	unsigned long long s, int is_negative, int len)
{
	if ((s > LLONG_MAX || len > 19) && !is_negative)
		return (-1);
	if ((s > LLONG_MAX || len > 19) && is_negative)
		return (0);
	if (is_negative)
		return (-s);
	return (s);
}

static int	get_number(char *str, int is_negative)
{
	int					len;
	unsigned long long	s;

	s = 0;
	len = 0;
	while (ft_isdigit(str[len]))
		len++;
	if (len > 20)
		return (adjust_big_value(s, is_negative, len));
	while (len)
	{
		s += (str[0] - '0') * get_power(len - 1);
		len--;
		str++;
	}
	return (adjust_big_value(s, is_negative, len));
}

int	ft_atoi(const char *str)
{
	int	minus;
	int	i;

	i = 0;
	minus = 0;
	while (is_whitespace(str[0]))
		str++;
	if (str[0] == '+' || (str[0] == '-' && ++minus))
		str++;
	if (!ft_isdigit(str[0]))
		return (0);
	return (get_number((char *)str, minus));
}
