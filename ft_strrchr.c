/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:05:25 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/16 12:26:14 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;
	char	alphabet;

	str = (char *)s;
	len = ft_strlen(str);
	alphabet = (char)c;
	if (alphabet == '\0')
		return (str + len);
	while (len--)
	{
		if (alphabet == str[len])
			return (str + len);
	}
	return (0);
}
