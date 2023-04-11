/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:49:51 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/16 12:23:53 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*size;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	size = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (size == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		size[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		size[i++] = s2[j++];
	}
	size[i] = '\0';
	return (size);
}
