/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:35:19 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/16 12:22:42 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	alpha;

	alpha = (char)c;
	while (*s)
	{	
		if (*s == alpha)
			return ((char *)(s));
		s++;
	}
	if (!c)
		return ((char *)s);
	return (0);
}
