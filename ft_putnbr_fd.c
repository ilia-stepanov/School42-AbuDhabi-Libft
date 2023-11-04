/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:30:58 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:05:54 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln = -ln;
	}
	if (ln < 10)
	{
		ft_putchar_fd(ln + '0', fd);
		return ;
	}
	ft_putnbr_fd(ln / 10, fd);
	ft_putchar_fd((ln % 10) + '0', fd);
}

// int main() {
//     int number1 = 12345;
//     int number2 = -9876;
//     int number3 = -0;
// 	int	number4 = -7;

//     int fd = 1;  // Standard output (stdout)

//     ft_putnbr_fd(number1, fd);
//     write(fd, "\n", 1);

//     ft_putnbr_fd(number2, fd);
//     write(fd, "\n", 1);

//     ft_putnbr_fd(number3, fd);
//     write(fd, "\n", 1);

//     ft_putnbr_fd(number4, fd);
//     write(fd, "\n", 1);
//     return 0;
// }