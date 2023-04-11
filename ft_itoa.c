/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:23:48 by nkietwee          #+#    #+#             */
/*   Updated: 2022/10/16 14:23:47 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_countnb(long num)
{
	size_t	count;

	count = 0;
	if (num <= 0)
	{
		count++;
		num = -num;
	}
	while (num > 0)
	{	
		num = num / 10;
		count++;
	}
	return (count);
}	

char	*ft_itoa(int n)
{
	size_t	size;	
	char	*ans;
	long	number;

	number = n;
	size = ft_countnb(number);
	ans = (char *)malloc((sizeof(char)) * (size + 1));
	if (!ans)
		return (NULL);
	ans[size--] = '\0';
	ans[0] = number + 48;
	if (number == 0)
		return (ans);
	if (number < 0)
	{
		ans[0] = '-';
		number = -number;
	}
	while (number > 0)
	{
		ans[size--] = (number % 10) + 48;
		number = number / 10;
	}
	return (ans);
}
