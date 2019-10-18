/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:39:28 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/18 20:56:36 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	i = ft_strlen(str) - 1;
	while (i && c != str[i])
		i--;
	if (i == 0 && c == str[i])
		return ((char *)str);
	else if (i == 0 && c != str[i])
		return (NULL);
	return ((char *)str + i);
}
