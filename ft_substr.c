/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:59:05 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/16 12:26:45 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	len_s;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len == 0 || start > len_s)
		return (ft_strdup(""));
	if (len_s - start > len)
		a = (char *)malloc((sizeof(char)) * (len + 1));
	else
		a = (char *)malloc((sizeof(char)) * (len_s - start + 1));
	if (!a)
		return (NULL);
	while (start < len_s && i < len)
		a[i++] = s[start++];
	a[i] = '\0';
	return (a);
}
