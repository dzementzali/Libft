/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:39:06 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/16 23:48:43 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!s1 || !s2 || !*s1 || !*s2)
		return (NULL);
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[j])
			j++;
		if (s2[j] == '\0')
			return ((char *)&s1[(i - j) + 1]);
		i++;
	}
	return (NULL);
}
