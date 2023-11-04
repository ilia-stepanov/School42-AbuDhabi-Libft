/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:02:29 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:06:46 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i <= n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

// int main () {

//    int result;

//    //Assigning the value to the string str1
//    char str1[] = "he";

//    //Assigning the value to the string str2
//    char str2[] = "hl";

//    //This will compare the first 3 characters
//    result = ft_strncmp(str1, str2, 3);
// 	printf("%d\n", result);
//    return 0;
// }