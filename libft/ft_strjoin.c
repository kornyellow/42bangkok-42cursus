/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:57:03 by korojrat          #+#    #+#             */
/*   Updated: 2023/05/23 02:10:58 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	rs_len;
	char	*res;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1_len = ft_strlen((char *) s1);
	s2_len = ft_strlen((char *) s2);
	rs_len = s1_len + s2_len + 1;
	res = malloc(sizeof(char) * rs_len);
	if (!res)
		return (NULL);
	ft_memmove(res, s1, s1_len);
	ft_memmove(res + s1_len, s2, s2_len);
	res[rs_len - 1] = '\0';
	return (res);
}
