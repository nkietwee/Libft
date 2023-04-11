/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:01:48 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/16 12:28:52 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
		count++;
	}
	count++;
	return (count);
}
