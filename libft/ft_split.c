/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:55:47 by korojrat          #+#    #+#             */
/*   Updated: 2023/05/23 14:00:27 by korojrat         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	arr_size;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	i;

	if (!s)
		return (NULL);
	arr_size = ft_getarr_size(s, c);
	arr = (char **) malloc(sizeof(char *) * (arr_size + 1));
	if (!arr)
		return (NULL);
	i = 0;
	next_str_len = 0;
	next_str = (char *) s;
	while (i < arr_size)
	{
		ft_get_next_str(&next_str, &next_str_len, c);
		arr[i] = (char *) malloc(sizeof(char) * (next_str_len + 1));
		ft_strlcpy(arr[i], next_str, next_str_len + 1);
		i ++;
	}
	arr[i] = NULL;
	return (arr);
}
