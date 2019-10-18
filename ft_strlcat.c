/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:38:13 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/15 16:20:46 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <libc.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int x;

	i = 0;
	j = 0;
	x = 0;
	while (dest[i])
		i++;
	while (src[x])
		x++;
	if (size <= i)
		x = x + size;
	else
		x = x + i;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (x);
}
