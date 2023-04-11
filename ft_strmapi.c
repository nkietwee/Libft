/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 21:11:10 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/16 12:25:25 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{	
	char			*str;
	unsigned int	i;
	unsigned int	len_s;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	str = (char *)(malloc)((sizeof (char)) *(len_s + 1));
	if (!str)
		return (NULL);
	while (i < len_s)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
