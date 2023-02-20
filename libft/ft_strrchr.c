/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:48:39 by korojrat          #+#    #+#             */
/*   Updated: 2023/02/17 20:19:12 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chk;
	char	*ret;

	ret = NULL;
	chk = (char *) s;
	while (*chk != '\0')
	{
		if (*chk == c)
			ret = chk;
		chk ++;
	}
	if (*chk == c)
		return (chk);
	return (ret);
}
