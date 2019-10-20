/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:35:34 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/17 16:47:57 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	if (n == 1)
		return (ss1[0] - ss2[0]);
	while (i < n - 1 && ss1[i] == ss2[i])
		i++;
	return (ss1[i] - ss2[i]);
}
