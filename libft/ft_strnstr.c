/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:08:42 by korojrat          #+#    #+#             */
/*   Updated: 2023/02/17 19:44:05 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*chk1;
	char	*chk2;
	size_t	chkn;

	if (*s2 == '\0')
		return ((char *) s1);
	str1 = (char *) s1;
	while (n > 0)
	{
		chk1 = str1;
		chk2 = (char *) s2;
		chkn = n;
		while (*chk1++ == *chk2++)
		{
			chkn --;
			if (*chk2 == '\0')
				return (str1);
			else if (*chk1 == '\0' || chkn <= 0)
				return (NULL);
		}
		str1 ++;
		n --;
	}
	return (NULL);
}
