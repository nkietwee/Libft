/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:14:10 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/16 12:28:21 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
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
	return (lst);
}
