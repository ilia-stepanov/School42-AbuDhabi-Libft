/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:21:13 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:06:28 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	dstsize = dstsize - 1;
	while (i < dstsize && i < src_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// #include <string.h>
// #include <stdio.h>

// #include <stdio.h>

// // void	test(int size)
// // {
// // 	// int	size1;
// // 	// int	size2;

// // 	// size1 = 5;
// // 	// size2 = 3;
// // 	char s1[] = "";
// // 	char b1[] = "";
// // 	int r1 = ft_strlcpy(s1,b1,size);
// // 	char s2[] = "";
// // 	char b2[] = "";
// // 	int r2 = strlcpy(s2,b2,size);
// // 	int res = strcmp(s1, s2);
// // 	printf("'%s', '%s', %d, %d, %d\n", s1, s2, r1, r2, res);
// // }
// // int	main(void)
// // {
// // 	test(0);
// // 	// test(7);
// // 	// test(4);
// // 	// test(3);
// // 	// test(2);
// // 	// test(1);
// // 	// test(0);
// // }
// int main(void) {
// 	int	s;

// 	s = 11;
//     char src1[] = "hello world";
// 	char dest1_orig[10] = "123456789";
//     char dest1[10] = "123456789";
//     unsigned int result1 = ft_strlcpy(dest1, src1, s);
//     unsigned int result1_orig = ft_strlcpy(dest1_orig, src1, s);
//     printf("Test Case 1:\n");
//     printf("ft_strlcpy: %s\n", dest1);
//     printf("strlcpy: %s\n", dest1_orig);
//     printf("Result: %s\n", (strcmp(dest1, dest1_orig) == 0) ? "P" : "F");
//     printf("Length: %u %u\n\n", result1, result1_orig);
//     // Test case 2
//     char src2[] = "This is a long string.";
//     char dest2[30];
//     unsigned int result2 = ft_strlcpy(dest2, src2, 30);
//     char dest2_orig[30];
//     unsigned int result2_orig = strlcpy(dest2_orig, src2, 30);
//     printf("Test Case 2:\n");
//     printf("ft_strlcpy: %s\n", dest2);
//     printf("strlcpy: %s\n", dest2_orig);
//     printf("Result: %s\n", (strcmp(dest2, dest2_orig) == 0) ? "P" : "F");
//     printf("Length: %u %u\n\n", result2, result2_orig);

//     // Test case 3
//     char src3[] = "";
//     char dest3[5];
//     unsigned int result3 = ft_strlcpy(dest3, src3, 5);
//     char dest3_orig[5];
//     unsigned int result3_orig = strlcpy(dest3_orig, src3, 5);
//     printf("Test Case 3:\n");
//     printf("ft_strlcpy: %s\n", dest3);
//     printf("strlcpy: %s\n", dest3_orig);
//     printf("Result: %s\n", (strcmp(dest3, dest3_orig) == 0) ? "P" : "F");
//     printf("Length: %u %u\n\n", result3, result3_orig);

//     // Test case 4
//     char src4[] = "Short";
//     char dest4[6];
//     unsigned int result4 = ft_strlcpy(dest4, src4, 6);
//     char dest4_orig[6];
//     unsigned int result4_orig = strlcpy(dest4_orig, src4, 6);
//     printf("Test Case 4:\n");
//     printf("ft_strlcpy: %s\n", dest4);
//     printf("strlcpy: %s\n", dest4_orig);
//     printf("Result: %s\n", (strcmp(dest4, dest4_orig) == 0) ? "P" : "F");
//     printf("Length: %u %u\n\n", result4, result4_orig);

//     // Test case 5
//     char src5[] = "abcdefghij";
//     char dest5[5];
//     unsigned int result5 = ft_strlcpy(dest5, src5, 5);
//     char dest5_orig[5];
//     unsigned int result5_orig = strlcpy(dest5_orig, src5, 5);
//     printf("Test Case 5:\n");
//     printf("ft_strlcpy: %s\n", dest5);
//     printf("strlcpy: %s\n", dest5_orig);
//     printf("Result: %s\n", (strcmp(dest5, dest5_orig) == 0) ? "P" : "F");
//     printf("Length: %u %u\n\n", result5, result5_orig);

//     // Test case 6
//     char src6[] = "1234567890";
//     char dest6[15];
//     unsigned int result6 = ft_strlcpy(dest6, src6, 15);
//     char dest6_orig[15];
//     unsigned int result6_orig = strlcpy(dest6_orig, src6, 15);
//     printf("Test Case 6:\n");
//     printf("ft_strlcpy: %s\n", dest6);
//     printf("strlcpy: %s\n", dest6_orig);
//     printf("Result: %s\n", (strcmp(dest6, dest6_orig) == 0) ? "P" : "F");
//     printf("Length: %u %u\n\n", result6, result6_orig);

//     // Test case 7
//     char src7[] = "A";
//     char dest7[1];
//     unsigned int result7 = ft_strlcpy(dest7, src7, 1);
//     char dest7_orig[1];
//     unsigned int result7_orig = strlcpy(dest7_orig, src7, 1);
//     printf("Test Case 7:\n");
//     printf("ft_strlcpy: %s\n", dest7);
//     printf("strlcpy: %s\n", dest7_orig);
//     printf("Result: %s\n", (strcmp(dest7, dest7_orig) == 0) ? "P" : "F");
//     printf("Length: %u %u\n\n", result7, result7_orig);

// 	return (0);
// }