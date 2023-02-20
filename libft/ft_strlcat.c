/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:25:59 by korojrat          #+#    #+#             */
/*   Updated: 2023/02/20 14:26:23 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	char	*mysrc;
	char	*mydst;
	int		dstlen;
	int		srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (n == 0)
		return (ft_strlen(src));
	mysrc = (char *) src;
	mydst = (char *) dst + dstlen;
	while (*mysrc != '\0' && n > 1 && n - dstlen > 1)
	{
		*mydst = *mysrc;
		mydst ++;
		mysrc ++;
		n --;
	}
	*mydst = '\0';
	return (dstlen + srclen);
}
