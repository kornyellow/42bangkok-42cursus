/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:33:58 by korojrat          #+#    #+#             */
/*   Updated: 2023/05/16 18:54:41 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst8;
	unsigned char	*src8;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst8 = (unsigned char *) dst;
	src8 = (unsigned char *) src;
	i = n / sizeof(unsigned char);
	while (i--)
		*dst8++ = *src8++;
	return (dst);
}
