/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:39:28 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/15 15:15:05 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*string;
	int		i;

	string = (char *)str;
	i = 0;
	if (c == 0 || str[0] == '\0' || !str || !*str)
		return (NULL);
	while (string[i])
	{
		while (string[i] == c)
		{
			if (string[i + 1] == c)
				i++;
			else
				return (&string[i]);
		}
		i++;
	}
	return (NULL);
}
