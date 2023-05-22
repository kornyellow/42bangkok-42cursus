/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: korojrat <korojrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 02:46:56 by korojrat          #+#    #+#             */
/*   Updated: 2023/05/23 02:53:30 by korojrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	lst_size;

	if (!lst)
		return (0);
	lst_size = 0;
	while (lst)
	{
		lst = lst->next;
		lst_size ++;
	}
	return (lst_size);
}
