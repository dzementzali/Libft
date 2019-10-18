/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:25:41 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/15 16:23:59 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t x;

	i = ft_strlen(src);
	x = 0;
	if (!src || !*src)
	{
		ft_memset(dst, 000, ft_strlen(dst));
		return (0);
	}
	while (src[x] && x < (size - 1))
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (i);
}
