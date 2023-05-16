/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:26:15 by korojrat          #+#    #+#             */
/*   Updated: 2023/05/16 18:28:35 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cptr;

	cptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*cptr == (unsigned char) c)
			return ((void *) cptr);
		cptr ++;
		i ++;
	}
	return (NULL);
}
