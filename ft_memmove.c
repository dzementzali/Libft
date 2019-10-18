/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:36:50 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/17 17:56:55 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;
	char	*tmp;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!(tmp = (char *)malloc(sizeof(char) * n)))
		return (str2);
	i = 0;
	while (str2[i] && i < n)
	{
		tmp[i] = str2[i];
		i++;
	}
	i = 0;
	while (tmp[i])
	{
		str1[i] = tmp[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
