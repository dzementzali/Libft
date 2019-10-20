/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:35:14 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/15 16:23:01 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>
#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*s;
	char	d;

	i = 0;
	s = (char *)str;
	d = (char)c;
	while (i < n)
	{
		if (s[i] == d)
			return (s + i);
		i++;
	}
	return (NULL);
}
