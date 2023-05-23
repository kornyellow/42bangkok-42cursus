/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 01:14:06 by korojrat          #+#    #+#             */
/*   Updated: 2023/05/23 13:56:26 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(long n)
{
	size_t	len;

	len = 0;
	while (n >= 1)
	{
		len ++;
		n /= 10;
	}
	return (len);
}

static char	*ft_getstr(char *res, long nbr, int len, int is_neg)
{
	if (nbr != 0)
		res = malloc(sizeof(char) * (len + 1));
	else
		return (res = ft_strdup("0"));
	res[len] = '\0';
	while (--len)
	{
		res[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (is_neg)
		res[0] = '-';
	else
		res[0] = (nbr % 10) + '0';
	return (res);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	int		is_neg;
	char	*res;

	res = 0;
	nbr = n;
	is_neg = 0;
	if (nbr < 0)
	{
		is_neg ++;
		nbr *= -1;
	}
	len = ft_getlen(nbr) + is_neg;
	res = ft_getstr(res, nbr, len, is_neg);
	if (!res)
		return (0);
	return (res);
}
