/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:55:47 by korojrat          #+#    #+#             */
/*   Updated: 2023/05/24 17:28:53 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_getarr_size(char const *s, char c)
{
	unsigned int	i;
	unsigned int	arr_size;

	if (!s)
		return (0);
	i = 0;
	arr_size = 0;
	while (s[i] == c)
		i ++;
	while (s[i])
	{
		if (s[i] == c)
		{
			arr_size ++;
			while (s[i] == c)
				i ++;
			continue ;
		}
		i ++;
	}
	if (s[i - 1] != c)
		arr_size ++;
	return (arr_size);
}

static void	ft_get_next_str(char **next_str, unsigned int *next_str_len, char c)
{
	unsigned int	i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_str_len)++;
		i ++;
	}
}

static void	*ft_free(char **arr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		free(arr[i++]);
	free(arr);
	return (NULL);
}

// var[0] = i
// var[1] = next_str_len
char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	arr_size;
	char			*next_str;
	unsigned int	var[2];

	if (!s)
		return (NULL);
	if (*s == 0)
		return (ft_calloc(1, sizeof(char **)));
	arr_size = ft_getarr_size(s, c);
	arr = (char **) malloc(sizeof(char *) * (arr_size + 1));
	if (!arr)
		return (NULL);
	var[0] = 0;
	var[1] = 0;
	next_str = (char *) s;
	while (var[0] < arr_size)
	{
		ft_get_next_str(&next_str, &var[1], c);
		arr[var[0]] = (char *) malloc(sizeof(char) * (var[1] + 1));
		if (arr[var[0]] == NULL)
			return (ft_free(arr, var[0]));
		ft_strlcpy(arr[var[0]++], next_str, var[1] + 1);
	}
	return (arr[var[0]] = NULL, arr);
}
