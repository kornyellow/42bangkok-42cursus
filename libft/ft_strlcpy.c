/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:29:21 by korojrat          #+#    #+#             */
/*   Updated: 2023/02/20 13:46:06 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	char	*mysrc;
	char	*mydst;

	if (n == 0)
		return (ft_strlen(src));
	mysrc = (char *) src;
	mydst = (char *) dst;
	while (*mysrc != '\0' && n > 1)
	{
		*mydst = *mysrc;
		mydst ++;
		mysrc ++;
		n --;
	}
	*mydst = '\0';
	return (ft_strlen(src));
}
