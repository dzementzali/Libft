/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:36:50 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/18 20:22:32 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libc.h>
#include <stdlib.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*tmp;

	tmp = ft_calloc(sizeof(char), ft_strlen(s2));
	ft_memcpy(tmp, s2, n);
	ft_memcpy(s1, tmp, n);
	return (s1);
}
