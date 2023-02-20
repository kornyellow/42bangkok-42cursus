/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:24:09 by korojrat          #+#    #+#             */
/*   Updated: 2023/02/17 19:06:27 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *) s1;
	str2 = (char *) s2;
	while (n > 0)
	{
		if ((unsigned char) *str1 != (unsigned char) *str2)
			return ((unsigned char) *str1 - (unsigned char) *str2);
		str1 ++;
		str2 ++;
		n --;
	}
	return (0);
}
