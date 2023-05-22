/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 01:42:34 by korojrat          #+#    #+#             */
/*   Updated: 2023/05/23 02:56:09 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inset(char c, char const *set)
{
	while (*set)
		if (c == *set ++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	l;
	size_t	r;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	l = 0;
	r = ft_strlen(s1);
	while (ft_inset(s1[l], set))
		l ++;
	if (l == r)
		return (ft_strdup(""));
	while (ft_inset(s1[r - 1], set))
		r --;
	return (ft_substr(s1, l, r - l));
}
