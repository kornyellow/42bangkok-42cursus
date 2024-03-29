/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:25:59 by korojrat          #+#    #+#             */
/*   Updated: 2023/05/16 17:22:48 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	end;
	size_t	len;

	len = 0;
	while (dst[len] && len < n)
		len += 1;
	end = len;
	while (src[len - end] && len + 1 < n)
	{
		dst[len] = src[len - end];
		len += 1;
	}
	if (end < n)
		dst[len] = '\0';
	return (end + ft_strlen(src));
}
