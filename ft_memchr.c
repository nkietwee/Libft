/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:13:38 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/16 14:21:00 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;
	size_t			i;	

	a = ((unsigned char *)s);
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
			return (a + i);
		i++;
	}
	return (NULL);
}
