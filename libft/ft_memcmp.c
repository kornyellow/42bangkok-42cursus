/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:29:01 by korojrat          #+#    #+#             */
/*   Updated: 2023/05/16 19:01:40 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	cs1 = (unsigned char *) s1;
	cs2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (*cs1 == *cs2 && ++i < n)
	{
		cs1 ++;
		cs2 ++;
	}
	return ((int)(*cs1 - *cs2));
}
