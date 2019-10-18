/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:36:08 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/17 17:15:47 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*des;
	char	*sour;

	des = (char *)dest;
	sour = (char *)src;
	i = 0;
	while (i < n && sour[i] != c)
	{
		des[i] = sour[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		des[i] = sour[i];
		return (des + i + 1);
	}
}
