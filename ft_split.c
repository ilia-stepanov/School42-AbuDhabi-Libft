/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 19:11:14 by istepano          #+#    #+#             */
/*   Updated: 2023/11/04 11:22:02 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_array_size(char const *s, char c)
{
	int		array_size;
	int		i;
	int		is_prev_separator;

	array_size = 0;
	i = -1;
	is_prev_separator = 1;
	while (s[++i])
	{
		if (s[i] != c && is_prev_separator)
		{
			array_size++;
			is_prev_separator = 0;
		}
		if (s[i] == c)
			is_prev_separator = 1;
	}
	return (array_size);
}

static char	**get_empty_array(char const *s, char c)
{
	int		size_res;
	char	**res;

	if (s == NULL)
		return (NULL);
	size_res = get_array_size(s, c) + 1;
	res = (char **)malloc(size_res * sizeof(char *));
	if (res == NULL)
		return (NULL);
	res[size_res - 1] = NULL;
	return (res);
}

static int	get_next_separator(char const *s, char c, int i)
{
	while (s[++i])
		if (s[i] == c)
			return (i);
	return (i);
}

static char	**populate_array(char const *s, char c, char **res)
{
	int		start;
	int		end;
	int		dim1;
	int		dim2;

	start = -1;
	end = -1;
	dim1 = -1;
	while (s[++start])
	{
		if (s[start] != c)
			end = get_next_separator(s, c, start);
		if (end > start)
		{
			res[++dim1] = (char *)malloc(sizeof(char) * (1 + end - start));
			dim2 = 0;
			while (end > start)
				res[dim1][dim2++] = s[start++];
			res[dim1][dim2] = 0;
			start--;
		}
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	res = get_empty_array(s, c);
	if (res == NULL)
		return (NULL);
	return (populate_array(s, c, res));
}

/*
void	ft_print_result(char **s)
{
	int	i;

	i = -1;
	if (s == NULL)
{		printf("NULL\n");
		return ;}
	while (s[++i])
		printf("%d-%s||", i, s[i]);
	printf("\n");
}

int		main(void)
{
	char	**res;

	// res = ft_split("hello world PRIVET MIR", ' ');
	// ft_print_result(res);
	// free(res);

	// res = ft_split("hello world PRIVET MIR ", ' ');
	// ft_print_result(res);
	// free(res);

	// res = ft_split(" hello world PRIVET MIR", ' ');
	// ft_print_result(res);
	// free(res);

	// res = ft_split(" hello   world    PRIVET MIR   ", ' ');
	// ft_print_result(res);
	// free(res);

	// res = ft_split(" hello world PRIVET MIR ", ' ');
	// ft_print_result(res);
	// free(res);

	// res = ft_split("        hello     world PRIVET MIR     ", ' ');
	// ft_print_result(res);
	// free(res);

	// res = ft_split("", ' ');
	// ft_print_result(res);
	// free(res);

	// res = ft_split(" hello world PRIVET MIR ", '\0');
	// ft_print_result(res);
	// free(res);

	// res = ft_split(" hello world PRIVET MIR ", '\n');
	// ft_print_result(res);
	// free(res);

	// res = ft_split(" hello world     PRIVET MIR ", '1');
	// ft_print_result(res);
	// free(res);

	// res = ft_split(NULL, '1');
	// ft_print_result(res);
	// free(res);

	// // res = ft_split(" hello world     PRIVET MIR ", NULL);
	// // ft_print_result(res);
	// // free(res);

	// res = ft_split(" hello", ' ');
	// ft_print_result(res);
	// free(res);

	// res = ft_split("hello ", ' ');
	// ft_print_result(res);
	// free(res);

	// res = ft_split("      hello    ", ' ');
	// ft_print_result(res);
	// free(res);

	// // res = ft_split(" hello ", NULL);
	// // ft_print_result(res);
	// // free(res);

	// res = ft_split(" ", ' ');
	// ft_print_result(res);
	// free(res);

	// res = ft_split("     ", ' ');
	// ft_print_result(res);
	// free(res);

	// // res = ft_split(NULL, NULL);
	// // ft_print_result(res);
	// // free(res);

	res = ft_split("  tripouille  42  ", ' ');
	if (!strcmp(res[0], "tripouille"))
		printf("CORRECT\n");
	else
		printf("INCORRECT\n");
	if (!strcmp(res[1], "42"))
		printf("CORRECT\n");
	else
		printf("INCORRECT\n");
	ft_print_result(res);
	free(res);

	res = ft_split("1--2---3----4-----5------42", '-');

	if (!strcmp(res[0], "1"))
		printf("CORRECT\n");
	else
		printf("INCORRECT\n");
	if (!strcmp(res[1], "2"))
		printf("CORRECT\n");
	else
		printf("INCORRECT\n");
	if (!strcmp(res[2], "3"))
		printf("CORRECT\n");
	else
		printf("INCORRECT\n");
	if (!strcmp(res[3], "4"))
		printf("CORRECT\n");
	else
		printf("INCORRECT\n");
	if (!strcmp(res[4], "5"))
		printf("CORRECT\n");
	else
		printf("INCORRECT\n");
	if (!strcmp(res[5], "42"))
		printf("CORRECT\n");
	else
		printf("INCORRECT\n");
	ft_print_result(res);
	free(res);
}

*/