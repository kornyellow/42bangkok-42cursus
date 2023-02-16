/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:04:10 by korojrat          #+#    #+#             */
/*   Updated: 2023/02/16 15:25:46 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ret;

	ret = (char *) s;
	while (*ret != '\0')
	{
		if (*ret == c)
			return (ret);
		ret ++;
	}
	if (*ret == c)
		return (ret);
	return (NULL);
}
