/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 00:36:18 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 13:34:06 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, 0, n);
}

// int main() {
//     char buffer1[10];
//     int array2[5];
//     double array3[8];

//     // Test Case 1: Initialize char buffer using bzero
//     ft_bzero(buffer1, sizeof(buffer1));
//     printf("Test Case 1: Char buffer initialized with bzero:\n");
//     for (size_t i = 0; i < sizeof(buffer1); i++) {
//         printf("%02X ", (unsigned char)buffer1[i]);
//     }
//     printf("\n");

//     // Test Case 2: Initialize int array using bzero
//     ft_bzero(array2, sizeof(array2));
//     printf("Test Case 2: Int array initialized with bzero:\n");
//     for (size_t i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
//         printf("%08X ", array2[i]);
//     }
//     printf("\n");

//     // Test Case 3: Initialize double array using bzero
//     ft_bzero(array3, sizeof(array3));
//     printf("Test Case 3: Double array initialized with bzero:\n");
//     for (size_t i = 0; i < sizeof(array3) / sizeof(array3[0]); i++) {
//         printf("%lf ", array3[i]);
//     }
//     printf("\n");

//     return 0;
// }