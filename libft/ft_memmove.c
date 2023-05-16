/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:36:20 by korojrat          #+#    #+#             */
/*   Updated: 2023/05/16 18:58:51 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst8;
	unsigned char	*src8;

	dst8 = (unsigned char *) dst;
	src8 = (unsigned char *) src;
	if (src < dst)
	{
		dst8 += n - 1;
		src8 += n - 1;
		while (n --)
			*dst8-- = *src8--;
	}
	else if (src >= dst)
	{
		while (n --)
			*dst8++ = *src8++;
	}
	return (dst);
}
